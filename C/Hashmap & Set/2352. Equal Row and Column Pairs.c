/* 2352. Equal Row and Column Pairs
Difficulty: Medium
Submission Link: https://leetcode.com/problems/equal-row-and-column-pairs/submissions/1385753084/ */

int equalPairs(int** grid, int gridSize, int* gridColSize){
    int ansCnt = 0;
    int rLen = gridSize, cLen = *gridColSize;
    for(int i = 0; i < rLen; i++){
        for(int j = 0; j < cLen; j++){
            if(grid[i][0] == grid[0][j]){
                ansCnt++;
                for(int k = 0; k < rLen; k++)
                {
                    if(grid[i][k]!=grid[k][j])
                    {
                        ansCnt--;
                        break;
                    }
                }
            }
        }
    }
    return ansCnt;
}