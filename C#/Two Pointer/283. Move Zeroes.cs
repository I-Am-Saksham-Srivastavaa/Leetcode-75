/*  283. Move Zeroes
Difficulty: Easy
Submission Link: https://leetcode.com/problems/move-zeroes/submissions/1246678906 */

public class Solution {
    public void MoveZeroes(int[] nums) {

        int left = 0;

        for(int i=0; i<nums.Length; i++)
        {
            if (nums[i] != 0)
            {
                (nums[left],nums[i]) = (nums[i], nums[left]);
                left++;
            }
        }
    }
}