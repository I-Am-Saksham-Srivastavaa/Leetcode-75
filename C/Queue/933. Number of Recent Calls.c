/* 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380153003/ */

typedef struct 
{
    int n;
    int base;
    int size;
    int q[4096];    
} RecentCounter;


RecentCounter* recentCounterCreate() 
{
    RecentCounter* p = (RecentCounter*)malloc(sizeof(RecentCounter));
    p->n=0;
    p->base=0;
    p->size=4096;    
    return p;
}

int recentCounterPing(RecentCounter* p, int t) 
{
    int k = 0;
    for(int i=0;i<p->n;++i)
    {
        int idx = (p->base+i)&(p->size-1);
        if(t-p->q[idx] > 3000) ++k;
    }
    
    p->base = (p->base+k)&(p->size-1);
    p->n-=k;
    p->q[(p->base+p->n)&(p->size-1)] = t;
    return ++p->n;
}

void recentCounterFree(RecentCounter* obj) 
{
    free(obj);    
}