""" 437. Path Sum III 
Difficulty: Easy
Submission Link: https://leetcode.com/problems/path-sum-iii/submissions/1388937462/ """

class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        def dfs(node, currSum):
            nonlocal ans, prefixSum
            if node is None:
                return

            currSum += node.val
            ans += prefixSum[currSum - targetSum]
            prefixSum[currSum] += 1
            
            dfs(node.left, currSum)
            dfs(node.right, currSum)
            
            prefixSum[currSum] -= 1

        prefixSum = defaultdict(int)
        prefixSum[0] = 1
        ans = 0
        dfs(root, 0)
        return ans