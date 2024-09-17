/* 547. Number of Provinces
Difficulty: Medium
Submission Link: https://leetcode.com/problems/number-of-provinces/submissions/1386406957/ */

void dfs(int node, int **isConnected, int isConnectedSize, int *visited) {
    visited[node] = 1;

    for (int i = 0; i < isConnectedSize; i++) {
        if (visited[i] == 0 && isConnected[node][i] == 1) {
            dfs(i, isConnected, isConnectedSize, visited);
        }
    }
}

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize) {

    int *visited = (int *)malloc(isConnectedSize * sizeof(int));    
    for (int i = 0; i < isConnectedSize; i++) {
        visited[i] = 0;
    }
    int numberOfComponents = 0;

    for (int i = 0; i < isConnectedSize; i++) {
        if (visited[i] == 0) {
            dfs(i, isConnected, isConnectedSize, visited);
            numberOfComponents++;
        }
    }
    free(visited);
    return numberOfComponents;
}