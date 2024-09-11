/* 2215. Find the Difference of Two Arrays
Difficulty: Easy
 https://leetcode.com/problems/find-the-difference-of-two-arrays/submissions/1385745357/ */

 public class Solution
{
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2)
    {
        var result = new List<IList<int>>();

        result.Add(new List<int>(nums1.Except(nums2)));
        result.Add(new List<int>(nums2.Except(nums1)));

        return result;
    }
}