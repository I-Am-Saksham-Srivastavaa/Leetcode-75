""" 994. Rotting Oranges
Difficulty: Medium
Submission Link: https://leetcode.com/problems/rotting-oranges/submissions/1385731476/ """

class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        queue = deque()
        fresh_oranges = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 2:
                    queue.append((i, j))
                elif grid[i][j] == 1:
                    fresh_oranges += 1
        if fresh_oranges == 0:
            return 0
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        time = 0
        
        while queue:
            time += 1
            for _ in range(len(queue)):
                x, y = queue.popleft()
                for dx, dy in directions:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < m and 0 <= ny < n and grid[nx][ny] == 1:
                        grid[nx][ny] = 2
                        queue.append((nx, ny))
                        fresh_oranges -= 1
            if fresh_oranges == 0:
                return time
        return -1