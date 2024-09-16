/* 198. House Robber
Difficulty: Medium
Submission Link: https://leetcode.com/problems/house-robber/submissions/1153674212/ */

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[1],nums[0]);
        if(nums.size() == 3) return max(nums[0]+nums[2], nums[1]);
        int a = nums[0],
        b = max(nums[1],nums[0]),
        c = max(nums[0]+nums[2], nums[1]), 
        temp;
        for(int i=3;i<nums.size();i++){
            temp = max(max(a,b)+nums[i],c);
            a = b;
            b = c;
            c = temp;
        }
        return max(max(a,b),c);
    }
};