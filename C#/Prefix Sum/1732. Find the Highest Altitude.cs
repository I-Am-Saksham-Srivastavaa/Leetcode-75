/* 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379774043/ */

public class Solution {
    public int LargestAltitude(int[] gain) 
    {
             
        int deger=0;
        int max = 0;
        for(int i = 0; i < gain.Length; i++)
        {
            deger = deger + gain[i];
            if(max<deger) max = deger;          
        }
    
    return max;
    }
}