/* 875. Koko Eating Bananas
Difficulty: Medium
Submission Link: https://leetcode.com/problems/koko-eating-bananas/submissions/1376888971/ */

int minEatingSpeed(int* piles, int pilesSize, int h) 
{
   int left=1;
   int right=1e9;
   for(;left<=right;)
   {
        int mid = left+(right-left)/2;
        long long hours=0;
        for(int i=0;i<pilesSize;++i) hours += piles[i]/mid + ((piles[i]%mid==0)?0:1);     
        if(hours>h) left=mid+1;
        else right=mid-1;
   }
   return left;
}