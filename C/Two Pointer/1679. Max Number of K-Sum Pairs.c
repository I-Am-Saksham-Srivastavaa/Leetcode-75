/* 1679. Max Number of K-Sum Pairs
Difficulty: Medium
Submission Link : https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1247608170/ */

typedef struct {
    int freq;
    int count;
    UT_hash_handle hh;
} hash_t;

int* entry(hash_t** set, int f) {
    hash_t* existing_hash;
    HASH_FIND_INT(*set, &f, existing_hash);
    if (existing_hash == NULL) {
        existing_hash = malloc(sizeof(hash_t));
        existing_hash->freq = f;
        existing_hash->count = 0;
        HASH_ADD_INT(*set, freq, existing_hash);
    }
    return &(existing_hash->count);
}

int maxOperations(int* nums, int numsSize, int k){
    int count = 0;
    hash_t *set = NULL, *p, *tmp;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int sum = k - num;
        HASH_FIND_INT(set, &sum, tmp);
        if (tmp != NULL && tmp->count > 0) {
            count +=1;
            (*entry(&set, sum))--;
        }
        else {
            (*entry(&set, num))++;
        }
    }
    return count;
}