/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/ */

public class Solution {
    bool checkVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    public int MaxVowels(string s, int k) {
        int i=0;
        int j=0;
        int n=s.Length;
        int count =0;
        int max=0;
        while(j<n){
         if(checkVowel(s[j])) count++;
         if(j-i+1==k){
          max=Math.Max(max,count);
          if(checkVowel(s[i])) count--;
          i++;
         }
         j++;
        }
        return max;
    }
}