/* 739. Daily Temperatures 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/daily-temperatures/submissions/1384488311/ */

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize)
    {
    int * ret = calloc(temperaturesSize, sizeof(int));
    *returnSize = temperaturesSize;
    int * stk = calloc(temperaturesSize, sizeof(int));
    int pt = -1; 
    
    for (int i = temperaturesSize-1; i >= 0; i--)
    {
        while(pt != -1 && temperatures[i] >= temperatures[stk[pt]])
        {
            pt--;
        }
        ret[i] = (pt == -1? 0: stk[pt]-i);
        stk[++pt] = i;
    }
    free(stk);
    return ret;
}