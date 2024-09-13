/* 901. Online Stock Span
Difficulty: Medium
Submission Link: https://leetcode.com/problems/online-stock-span/submissions/1384561139/ */

typedef struct {
    int first;
    int second;
} Pair;

typedef struct {
    Pair data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} StockSpanner;

Node* createNode(Pair data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

StockSpanner* stockSpannerCreate() {
    StockSpanner *obj = (StockSpanner*)malloc(sizeof(StockSpanner));
    obj->top = NULL;
    return obj;
}

void push(StockSpanner* obj, Pair data) {
    Node *newNode = createNode(data);
    newNode->next = obj->top;
    obj->top = newNode;
}

Pair pop(StockSpanner* obj) {
    if (obj->top == NULL) {
        Pair emptyPair = {0, 0};
        return emptyPair;
    }
    Node *temp = obj->top;
    Pair data = temp->data;
    obj->top = temp->next;
    free(temp);
    return data;
}

int stockSpannerNext(StockSpanner* obj, int price) {
    int cnt = 1;
    while (obj->top != NULL && obj->top->data.first <= price) {
        cnt += obj->top->data.second;
        pop(obj);
    }
    push(obj, (Pair){price, cnt});
    return cnt;
}

void stockSpannerFree(StockSpanner* obj) {
    while (obj->top != NULL) {
        pop(obj);
    }
    free(obj);
}