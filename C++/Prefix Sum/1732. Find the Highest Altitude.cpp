/* 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379773934/ */

class Solution {
public:
    int largestAltitude(vector<int>& v) {
        int res  = 0;
        int start = 0;
        for(auto i: v){
            start = start+i;
            res = max(res,start);
        }
        return res;  
    }
};