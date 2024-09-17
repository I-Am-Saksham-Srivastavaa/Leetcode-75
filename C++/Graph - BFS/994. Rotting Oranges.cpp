/* 994. Rotting Oranges
Difficulty: Medium
Submission Link: https://leetcode.com/problems/rotting-oranges/submissions/1385731869/ */

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time = 0;
        queue<pair<int, int>> q;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while (!q.empty()) {
            int size = q.size();
            time++;
            for (int k = 0; k < size; k++) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [i, j] : directions) {
                    int newX = x + i;
                    int newY = y + j;
                    if (newX < 0 || newX >= m || newY < 0 || newY >= n || grid[newX][newY] == 0 || grid[newX][newY] == 2) {
                        continue;
                    }
                    if (grid[newX][newY] == 1) {
                        grid[newX][newY] = 2;
                        q.push({newX, newY});
                    }
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return time == 0 ? 0 : time - 1;
    }
};