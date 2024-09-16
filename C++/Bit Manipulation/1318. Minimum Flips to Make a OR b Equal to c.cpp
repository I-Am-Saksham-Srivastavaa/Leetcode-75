/* 1318. Minimum Flips to Make a OR b Equal to c
Difficulty: Medium
Submission Link: https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/submissions/1388960844/ */

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip=0;
        while(a!=0 || b!=0 || c!=0){
            if( (c&1)==1){
                if((a&1)==0 && (b&1)==0){
                        flip++;
                }
            }
            else{
                if((a&1)==1)
                  flip++;

                if((b&1)==1)
                 flip++;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return flip;
        
    }
};