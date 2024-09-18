/* 724. Find Pivot Index
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-pivot-index/submissions/1383570366/ */

int pivotIndex(int* nums, int n) {
        int start[n];
        int end[n];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            start[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            end[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(start[i]==end[i]){
                return i;
            }
        }
        return -1;
    
}