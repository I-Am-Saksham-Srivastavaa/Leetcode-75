/* 2390. Removing Stars From a String
Difficulty: Easy
Submission Link: https://leetcode.com/problems/removing-stars-from-a-string/submissions/1375561198/ */

class Solution {
public:
    string removeStars(string s) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        int n = s.size();
        string ans = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '*') ans.pop_back();
            else ans+=s[i];
        }
        return ans;
    }
};