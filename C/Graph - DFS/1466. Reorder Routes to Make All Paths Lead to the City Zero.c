/* 1466. Reorder Routes to Make All Paths Lead to the City Zero
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/submissions/1391179512/ */

typedef struct AdjList{
    int* node;
    int* nodeDir;
    int nodeSize;
    int nodeCount;
}AdjList;

AdjList* initAdjList(int size){
    AdjList* adjList = malloc(size * sizeof(AdjList));
    for(int i = 0; i < size; i++){
        adjList[i].node = malloc(2 * sizeof(int));
        adjList[i].nodeDir = malloc(2 * sizeof(int));
        adjList[i].nodeSize = 2;
        adjList[i].nodeCount = 0;
    }
    return adjList;
}

void upSize(AdjList* adjList, int index){
    int newSize = adjList[index].nodeSize * 2;
    adjList[index].node = realloc(adjList[index].node, newSize * sizeof(int));
    adjList[index].nodeDir = realloc(adjList[index].nodeDir, newSize * sizeof(int));
    adjList[index].nodeSize = newSize;    
}

void addEdge(AdjList* adjList, int source, int destination, int direction){
    adjList[source].node[adjList[source].nodeCount] = destination;
    adjList[source].nodeDir[adjList[source].nodeCount++] = direction;
}

void freeAdjList(AdjList* adjList, int size){
    for(int i = 0; i < size; i++){
        free(adjList[i].nodeDir);
        free(adjList[i].node);
    }
    free(adjList);
}

void dfs(AdjList* adjList, int parent, int curr, int* redirects){
    
    for(int i = 0; i < adjList[curr].nodeCount; i++){
        int child = adjList[curr].node[i];
        int direction = adjList[curr].nodeDir[i];
        if(parent != child){
            *redirects += direction;
            dfs(adjList, curr, child, redirects);
        }
    }
}

int minReorder(int n, int** connections, int connectionsSize, int* connectionsColSize){
    int redirects = 0;
    AdjList* adjList = initAdjList(n);
    
    for(int i = 0; i < connectionsSize; i++){
        int city1 = connections[i][0];
        int city2 = connections[i][1];

        if(adjList[city1].nodeCount == adjList[city1].nodeSize)
            upSize(adjList, city1);
        addEdge(adjList, city1, city2, 1);

        if(adjList[city2].nodeCount == adjList[city2].nodeSize)
            upSize(adjList, city2);          
        addEdge(adjList, city2, city1, 0);
    }
    dfs(adjList, -1, 0, &redirects);
    freeAdjList(adjList, n);
    return redirects;
}