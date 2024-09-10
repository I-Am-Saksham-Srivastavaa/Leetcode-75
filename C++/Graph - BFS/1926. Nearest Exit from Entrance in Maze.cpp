/* 1926. Nearest Exit from Entrance in Maze 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/submissions/1382353105/ */

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        vector<tuple<int, int, int>> st;
        int rows = maze.size();
        int cols = maze[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (maze[i][j] == '.' && (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) && !isEquals(vector<int>{i, j}, entrance)) {
                    st.push_back({i, j, 0});
                }
            }
        }
        return bfs(st, maze, entrance);
    }

private:
    bool isEquals(const vector<int>& a, const vector<int>& b) {
        return a[0] == b[0] && a[1] == b[1];
    }

    int bfs(vector<tuple<int, int, int>>& st, vector<vector<char>>& maze, vector<int>& start) {
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        unordered_map<int, unordered_map<int, bool>> visited;

        while (!st.empty()) {
            auto [row, col, len] = st.front();
            st.erase(st.begin());
            visited[row][col] = true;

            for (auto& dir : directions) {
                int r = row + dir[0];
                int c = col + dir[1];

                if (isEquals(vector<int>{r, c}, start)) return len + 1;
                if (r < 0 || c < 0 || r >= maze.size() || c >= maze[0].size() || maze[r][c] == '+' || visited[r][c]) continue;

                st.push_back({r, c, len + 1});
                visited[r][c] = true;
            }
        }
        return -1;
    }
};