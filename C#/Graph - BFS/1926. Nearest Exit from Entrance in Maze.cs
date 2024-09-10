/* 1926. Nearest Exit from Entrance in Maze 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/submissions/1382353476/ */

public class Solution {
    public int NearestExit(char[][] maze, int[] entrance) {
        
        var directions = new int[][]
        {
            new int[]{0,1},
            new int[]{1,0},
            new int[]{0,-1},
            new int[]{-1,0}
        };

        var queue = new Queue<int[]>();
        queue.Enqueue(new int[]{entrance[0], entrance[1], 0});
        maze[entrance[0]][entrance[1]] = '+';

        while(queue.Count > 0)
        {
            var current = queue.Dequeue();
            int row = current[0], col = current[1], steps = current[2];

            foreach(var direction in directions)
            {
                var newRow = direction[0] + row;
                var newCol = direction[1] + col;

                if(newRow >= 0 && newRow < maze.Length  && newCol >= 0 && newCol < maze[0].Length && maze[newRow][newCol] == '.' )
                {
                    if(newRow == 0 || newRow == maze.Length - 1  || newCol == 0 || newCol == maze[0].Length - 1 )
                    {
                        return steps + 1;
                    }

                    maze[newRow][newCol] = '+';
                    queue.Enqueue(new int[]{newRow, newCol, steps+1});
                }
            }
        }
       
       return -1;
    }
}