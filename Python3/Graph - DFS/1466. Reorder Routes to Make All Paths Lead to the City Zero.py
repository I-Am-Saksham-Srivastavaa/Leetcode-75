""" 1466. Reorder Routes to Make All Paths Lead to the City Zero
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/submissions/1391178506/ """

class Solution:
    res=0
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        adj=[]
        for i in range(n):
            adj.append([])
        for i in connections:
            adj[i[0]].append([i[1],1])
            adj[i[1]].append([i[0],0])
        def dfs(child,parent):
            for [c, s] in adj[child]:
                if c!=parent:
                    self.res+=s
                    dfs(c,child)
        dfs(0,-1)
        return self.res
          