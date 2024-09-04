//605. Can Place Flowers
// Difficulty: Easy
// Submission Link: https://leetcode.com/problems/can-place-flowers/submissions/1017421999

public class Solution {
    public bool CanPlaceFlowers(int[] flowerbed, int n) {
        int count = 0;
        int i = 0;
        
        while (i < flowerbed.Length) {
            if (flowerbed[i] == 0) {
                bool prevEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool nextEmpty = (i == flowerbed.Length - 1) || (flowerbed[i + 1] == 0);
                
                if (prevEmpty && nextEmpty) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
            
            i++;
        }
        
        return count >= n;
    }
}