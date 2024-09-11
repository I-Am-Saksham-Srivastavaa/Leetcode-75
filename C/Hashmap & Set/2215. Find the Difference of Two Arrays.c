/* 2215. Find the Difference of Two Arrays
Difficulty: Easy
 https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1385745501/ */

 const int TABLE_SIZE = 63;
const int TRANSLATE_BY = 1000;
const int SHIFT_MASK = 31;
const int INDEX_SHIFT = 5;
typedef uint64_t table_elt_t;

inline int hash(int x) {
    return x + TRANSLATE_BY;
}

inline void clear_table(table_elt_t* table) {
    memset(table, 0, sizeof(table_elt_t)*TABLE_SIZE);
}

inline void set_mark1(table_elt_t* table, int x) {
    int i = hash(x);
    int q = i >> INDEX_SHIFT;
    int shift = 2ul * (i & SHIFT_MASK);
    table[q] |= 1ul << shift;
}

inline bool get_and_set2(table_elt_t* table, int x) {
    int i = hash(x);
    int q = i >> INDEX_SHIFT;
    int shift = 2ul * (i & SHIFT_MASK);

    bool res = ((table[q] >> shift) & 3ul) != 0ul;
    table[q] |= 2ul << shift;
    return res;
}

inline bool get_and_clr(table_elt_t* table, int x) {
    int i = hash(x);
    int q = i >> INDEX_SHIFT;
    int shift = 2 * (i & SHIFT_MASK);

    table_elt_t b = (table[q] >> shift) & 3ul;
    bool res = b == 3ul || b == 0ul;
    table[q] &= ~(3ul << shift);
    return res;
}

int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes){

    if (nums1Size > nums2Size) {
        int** res = findDifference(nums2, nums2Size, nums1, nums1Size, returnSize, returnColumnSizes);

        int* tmpv = res[0];
        res[0] = res[1];
        res[1] = tmpv;
        int* tmpi = (*returnColumnSizes)[0];
        (*returnColumnSizes)[0] = (*returnColumnSizes)[1];
        (*returnColumnSizes)[1] = tmpi;
        return res;
    }

    int** res = malloc(sizeof(int*) * 2);
    *returnColumnSizes = malloc(sizeof(int) * 2);
    *returnSize = 2;

    if (nums1Size == 0) {
        (*returnColumnSizes)[0] = 0;
        (*returnColumnSizes)[1] = nums2Size;
        res[0] = NULL;
        res[1] = NULL;
        return res;
    }

    table_elt_t table[TABLE_SIZE];
    clear_table(table);


    for (int i = 0; i < nums1Size; ++i) {
        set_mark1(table, nums1[i]);
    }

    res[0] = malloc(sizeof(int) * nums1Size);
    res[1] = malloc(sizeof(int) * nums2Size);
    int len1 = 0;
    int len2 = 0;

    for (int j = 0; j < nums2Size; ++j) {
        if (!get_and_set2(table, nums2[j])) {
            res[1][len2++] = nums2[j];
        }
    }
    (*returnColumnSizes)[1] = len2;

    for (int i = 0; i < nums1Size; ++i) {
        if (!get_and_clr(table, nums1[i])) {
            res[0][len1++] = nums1[i];
        }
    }
    (*returnColumnSizes)[0] = len1;

    return res;
}