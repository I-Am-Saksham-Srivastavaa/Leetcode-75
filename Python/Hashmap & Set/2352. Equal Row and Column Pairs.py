""" 2352. Equal Row and Column Pairs
Difficulty: Medium
Submission Link: https://leetcode.com/problems/equal-row-and-column-pairs/submissions/1385752444/ """

class Solution(object):
    def equalPairs(self, grid):

        d_rows={}
        d_columns={}
        matches=0

        for row in grid:
            h=hash(tuple(row)) 
            d_rows[h]=d_rows.get(h,0) +1
            
        n = len(grid)
        columns = [[] for _ in range(n)]

        for row in grid:
            for j in range(n): columns[j].append(row[j])
       
        for column in columns: 
            h=hash(tuple(column))
            d_columns[h]=d_columns.get(h,0) +1

        for h in d_rows:
            if (h in d_columns):
                print(d_rows.get(h), d_columns.get(h))
                matches += d_rows[h] * d_columns[h]

        return matches