/* 1679. Max Number of K-Sum Pairs
Difficulty: Medium
Submission Link : https://leetcode.com/problems/max-number-of-k-sum-pairs/submissions/1247607924/ */

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int st=0,end=nums.size()-1,count=0;
       while(st<end) {
           if((nums[st]+nums[end])==k) {
               count++;
               st++;
               end--;
           }
           else if((nums[st]+nums[end])>k) {
               end--;
           }
           else {
               st++;
           }
       } 
       return count;
    }
};