""" 1926. Nearest Exit from Entrance in Maze 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/submissions/1382352939/ """

class Solution(object):
    def nearestExit(self, maze, entrance):
        m=len(maze)
        n=len(maze[0])
        directions=[(-1,0),(1,0),(0,-1),(0,1)]
        queue=deque()
        queue.append([entrance[0],entrance[1],0])
        maze[entrance[0]][entrance[1]] = '+'
        while queue:
            elex,eley,dist=queue.popleft()
            for x,y in directions:

                x1=elex+x
                y1=eley+y
                if 0<=x1<=m-1 and 0<=y1<=n-1 and maze[x1][y1]=='.':
                    if x1==0 or x1==m-1 or y1==0 or y1==n-1:
                        return dist+1

                    else:
                        maze[x1][y1] = '+'
                        queue.append([x1,y1,dist+1])

        return -1