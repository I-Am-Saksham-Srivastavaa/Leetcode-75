""" 437. Path Sum III 
Difficulty: Easy
Submission Link: https://leetcode.com/problems/path-sum-iii/submissions/1388937698/ """

class Solution:
    def pathSum(self, root, target):
        self.result = 0
        
        self.lookup ={}
        
        self.dfs(root, target, 0)
        
        return self.result
    
    def dfs(self, root, target, currSum):
        if not root:
            return None
        
        currSum = currSum+root.val
        
        if currSum == target :
            self.result+=1
            
        if (currSum-target) in self.lookup:
            self.result += self.lookup[currSum-target]
            
        if currSum in self.lookup:
            self.lookup[currSum] +=1
        else:
            self.lookup[currSum] = 1
        
        self.dfs(root.left, target, currSum)
        self.dfs(root.right, target, currSum)
        self.lookup[currSum] -=1