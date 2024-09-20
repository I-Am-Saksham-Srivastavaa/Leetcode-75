/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/1387473630/ */

class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0;
        map<char,int> mp;
        for(int i=0;i<k;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                mp[s[i]]++;
            }
        }
        res=max(res,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
        int j=0;
        for(int i=k;i<(int)s.size();i++){
            mp[s[j]]--;
            mp[s[j]]=max(0,mp[s[j]]);
            mp[s[i]]++;
            res=max(res,mp['a']+mp['e']+mp['i']+mp['o']+mp['u']);
            j++;
        }
        return res;
    }
};