""" 1466. Reorder Routes to Make All Paths Lead to the City Zero
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/submissions/1391178771/ """

class Solution:
    def dfs(self, al, visited, from_node):
        change = 0
        visited[from_node] = True
        for to_node in al[from_node]:
            if not visited[abs(to_node)]:
                change += self.dfs(al, visited, abs(to_node)) + (1 if to_node > 0 else 0)
        return change

    def minReorder(self, n, connections):
        al = [[] for _ in range(n)]
        for c in connections:
            al[c[0]].append(c[1])
            al[c[1]].append(-c[0])
        visited = [False] * n
        return self.dfs(al, visited, 0)