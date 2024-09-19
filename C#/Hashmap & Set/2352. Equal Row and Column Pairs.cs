/* 2352. Equal Row and Column Pairs
Difficulty: Medium
Submission Link: https://leetcode.com/problems/equal-row-and-column-pairs/submissions/1385752697 */

public class Solution {
    public int EqualPairs(int[][] grid) {
        int result = 0;
        int len = grid.Length;

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                int checker = 0;
                for(int z = 0; z<len; z++){
                    if(grid[i][z] == grid[z][j]){
                        checker++;
                    }
                }
                if(checker == len){
                    result++;
                }
            }
        }

        return result;
    }
}