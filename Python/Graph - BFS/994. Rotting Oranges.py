""" 994. Rotting Oranges
Difficulty: Medium
Submission Link: https://leetcode.com/problems/rotting-oranges/submissions/1385731625/ """

class Solution(object):
    def orangesRotting(self, grid):
        n, m, cnt, ans = len(grid), len(grid[0]), 0, 0
        q = []

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 2: q.append((i, j))
                if grid[i][j] == 1: cnt += 1
        
        if not q and not cnt: return 0
        
        dx, dy = [-1, 0, 1, 0], [0, 1, 0, -1]
        while(len(q)):
            s = len(q)
            for _ in range(s):
                i, j = q[0][0], q[0][1]
                q.pop(0)
                for k in range(4):
                    x, y = i + dx[k], j + dy[k]
                    if x >= 0 and x < n and y >= 0 and y < m and grid[x][y] == 1:
                        grid[x][y] = 2
                        cnt -= 1
                        q.append((x, y))
            ans += 1
        
        return -1 if cnt else ans - 1