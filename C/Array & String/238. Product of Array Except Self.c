/* 238. Product of Array Except Self
Difficulty: Medium
Submission Link: https://leetcode.com/problems/product-of-array-except-self/submissions/1030276153/
*/

int* productExceptSelf(int* nums, int N, int* returnSize){
    int product = 1;
    for(int i=0; i<N; i++)
        product *= nums[i];

    *returnSize = N;
    int *answer = (int *)malloc(N*sizeof(int));
    for(int i=0; i<N; i++){
        if(nums[i]==0){
            answer[i] = ifZero(nums, i, N);
            continue;
        }
        answer[i] = product/nums[i];
    }
    return answer;
}
int ifZero(int *nums,int index, int N){
    int answer = 1;
    for(int i=0; i<N; i++){
        if(i==index) continue;
        answer*=nums[i];
    }
    return answer;
}