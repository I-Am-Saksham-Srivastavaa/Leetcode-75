/* 994. Rotting Oranges
Difficulty: Medium
Submission Link: https://leetcode.com/problems/rotting-oranges/submissions/1385732070/ */

public class Solution {
    public const int fresh = 1, rotten = 2;

    public readonly (int, int)[] directions = {
        (0, 1),
        (0, -1),
        (1, 0),
        (-1, 0),
    };

    public int OrangesRotting(int[][] grid) {
        var m = grid.Length;
        var n = grid[0].Length;
        var queue = new Queue<(int, int)>();
        var minutes = 0;
        var numFresh = 0;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) 
                switch (grid[i][j])
                {
                    case fresh: 
                        numFresh++;
                        break;
                    case rotten: 
                        queue.Enqueue((i, j));
                        break;
                }
        
        while (queue.Count > 0)
        {
            var boardChanged = false;
            var nextQueue = new Queue<(int, int)>();

            while (queue.Count > 0)
            {
                var (row, col) = queue.Dequeue();

                foreach (var (x, y) in directions)
                {
                    var (newRow, newCol) = (row + x, col + y);

                    if (newRow < 0 || newRow >= m) continue;
                    if (newCol < 0 || newCol >= n) continue;
                    if (grid[newRow][newCol] != fresh) continue;

                    boardChanged = true;
                    grid[newRow][newCol] = rotten;
                    numFresh--;
                    nextQueue.Enqueue((newRow, newCol));
                }
            }

            if (boardChanged) minutes++;
            queue = nextQueue;
        }

        if (numFresh != 0) return -1;

        return minutes;
    }
}