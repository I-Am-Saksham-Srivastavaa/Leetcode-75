/* 1926. Nearest Exit from Entrance in Maze 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/submissions/1382353592/ */

int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

int bfs(char** maze, int** queue, int row, int col, int rLimit, int cLimit) {
    int front = 0, rear = 0, tmp = 0, counter = 0;

    queue[rear][0] = row;
    queue[rear++][1] = col;
    maze[row][col] = '+';

    while(front < rear) {
        tmp = rear;
        while(front < tmp) {
            for(int i = 0; i < 4; i++) {
                int x = queue[front][0] + dir[i][0];
                int y = queue[front][1] + dir[i][1];
                if(x >= 0 && x <= rLimit && y >= 0 && y <= cLimit && maze[x][y] == '.') {
                    if(x == rLimit || y == cLimit || x == 0 || y == 0) {
                        return ++counter;
                    }
                    maze[x][y] = '+';
                    queue[rear][0] = x;
                    queue[rear++][1] = y;
                }
            }
            front++;
        }
        counter++;
    }
    return -1;
}

int nearestExit(char** maze, int mazeSize, int* mazeColSize, int* entrance, int entranceSize){
    int rLimit = mazeSize - 1;
    int cLimit = *mazeColSize -1;
    int total = mazeSize * (*mazeColSize);
    int front = 0, rear = 0;
    int** queue = malloc(total * sizeof(int*));

    for(int i = 0; i < total; i++) {
        queue[i] = malloc(2 * sizeof(int));
    }

    return bfs(maze, queue, entrance[0], entrance[1], rLimit, cLimit);
}