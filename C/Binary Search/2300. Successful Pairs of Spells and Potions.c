/* 2300. Successful Pairs of Spells and Potions
Difficulty: Medium
Submisson Link: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/submissions/1376879879/ */

int firstIndexSuccess(int spell, int* potions, int potionsSize, long long success) {
    int left = 0, right = potionsSize, middle = 0;
    while (left < right) {
        middle = left + (right - left) / 2;
        if ((long long)spell * potions[middle] >= success) {
            right = middle;
        }
        else left = middle + 1;
    }
    return left;
}
int ascend(const void *pa, const void *pb) {
    const int a = *(const int*)pa;
    const int b = *(const int*)pb;
    if (a == b) {
        return 0;
    }
    return (a < b) ? -1 : 1;
}
int* successfulPairs(int* spells, int spellsSize, int* potions,int potionsSize, long long success, int* returnSize) {
    int* result = (int*)calloc(spellsSize, sizeof(int));
    qsort(potions, potionsSize, sizeof(int), ascend);
    for (int i = 0; i < spellsSize; i++) {
        result[i] = potionsSize - firstIndexSuccess(spells[i], potions, potionsSize, success);
    }
    *returnSize = spellsSize;
    return result;
}