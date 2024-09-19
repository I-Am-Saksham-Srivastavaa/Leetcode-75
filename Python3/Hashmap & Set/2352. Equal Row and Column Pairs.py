""" 2352. Equal Row and Column Pairs
Difficulty: Medium
Submission Link: https://leetcode.com/problems/equal-row-and-column-pairs/submissions/1385750996/ """

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        m = defaultdict(int)
        cnt = 0

        for row in grid:
            m[str(row)] += 1
        
        for i in range(len(grid[0])):
            col = []
            for j in range(len(grid)):
                col.append(grid[j][i])
            cnt += m[str(col)]
        return cnt