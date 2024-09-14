/* 875. Koko Eating Bananas
Difficulty: Medium
Submission Link: https://leetcode.com/problems/koko-eating-bananas/submissions/1376888525/ */

public class Solution { 
    public int MinEatingSpeed(int[] piles, int h) {
        int low=1, high=piles.Max(); 

        while(low<=high){
            int mid=(low+high)/2;
            double val=0;

            foreach (var pile in piles) {
                val += Math.Ceiling((double)pile/mid);
            }
             
            if(val<=h){ 
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
}