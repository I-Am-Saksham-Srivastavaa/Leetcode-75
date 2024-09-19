/* 2462. Total Cost to Hire K Workers
Difficulty: Hard
Submission Link: https://leetcode.com/problems/total-cost-to-hire-k-workers/submissions/1390168958/ */

struct priorityQ {
    int capacity;
    int size;
    int* data;
};

struct priorityQ* createpq(int capacity) {
    struct priorityQ* pq = malloc(sizeof(struct priorityQ));
    pq->capacity = capacity;
    pq->size = 0;
    pq->data = malloc(capacity * sizeof(int));

    return pq;
}

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void minHeapify(struct priorityQ* pq, int idx) {
    int smallest = idx;
    int leftChild = 2 * idx + 1;
    int rightChild = 2 * idx + 2;

    if(leftChild < pq->size && pq->data[leftChild] < pq->data[smallest]) smallest = leftChild;
    if(rightChild < pq->size && pq->data[rightChild] < pq->data[smallest]) smallest = rightChild;

    if(smallest != idx) {
        swap(&pq->data[smallest], &pq->data[idx]);
        minHeapify(pq, smallest);
    }
}

void push(struct priorityQ* pq, int val) {
    int idx = pq->size;
    pq->data[(pq->size)++] = val;

    while(idx && pq->data[(idx - 1) / 2] > pq->data[idx]) {
        swap(&pq->data[(idx - 1) / 2], &pq->data[idx]);
        idx = (idx - 1) / 2;
    }
}

int pop(struct priorityQ* pq) {
    int root = pq->data[0];
    pq->data[0] = pq->data[--(pq->size)];
    minHeapify(pq, 0);

    return root;
}

int peek(struct priorityQ* pq) {
    return (pq->size)? pq->data[0] : INT_MAX;
}

long long totalCost(int* costs, int costsSize, int k, int candidates) {
    int leftCap = 0;
    int rightCap = costsSize - 1;
    long long ret = 0;
    struct priorityQ* pqLeft = createpq(candidates);
    struct priorityQ* pqRight = createpq(candidates);

    while(k--) {
        while(pqLeft->size < candidates && leftCap <= rightCap) push(pqLeft, costs[leftCap++]);
        while(pqRight->size < candidates && rightCap >= leftCap) push(pqRight, costs[rightCap--]);
        int leftMin = peek(pqLeft);
        int rightMin = peek(pqRight);

        if(leftMin <= rightMin) {
            ret += leftMin;
            pop(pqLeft);
        }
        else {
            ret += rightMin;
            pop(pqRight);
        }
    }

    return ret;
}