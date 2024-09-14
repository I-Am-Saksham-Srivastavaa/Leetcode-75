/* 1161. Maximum Level Sum of a Binary Tree 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/1385726063/ */

public class Solution {
    public int MaxLevelSum(TreeNode root)
    {
        var traverse = new Queue<TreeNode>();
        traverse.Enqueue(root);
        
        var maxLevel = 1;
        var maxLevelSum = root.val;

        var currentLevel = 0;

        while (traverse.Count != 0)
        {
            currentLevel++;
            var levelCount = traverse.Count;
            var currentLevelSum = 0;
            
            for (int i = 0; i < levelCount; i++)
            {
                var node = traverse.Dequeue();

                if (node.left is not null)
                {
                    traverse.Enqueue(node.left);
                }
                
                if (node.right is not null)
                {
                    traverse.Enqueue(node.right);
                }
                
                currentLevelSum += node.val;
            }

            if (maxLevelSum < currentLevelSum)
            {
                maxLevelSum = currentLevelSum;
                maxLevel = currentLevel;
            }
        }
        
        return maxLevel;
    }
}