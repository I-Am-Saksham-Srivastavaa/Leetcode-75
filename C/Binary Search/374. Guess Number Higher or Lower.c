/* 374. Guess Number Higher or Lower
Difficulty: Me
Submission Link: https://leetcode.com/problems/guess-number-higher-or-lower/submissions/1376861145/ */

int guessNumber(int n){
    long result,sp,ep,mid;
    for(sp=1,ep=n;sp<=ep;)
    {
        mid=(sp+ep)/2;
        result=guess(mid);
        if(result==0) return mid;
        else if(result==-1) ep=mid-1;
        else sp=mid+1;
    }
    return -1;
}