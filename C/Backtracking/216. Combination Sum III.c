/* 216. Combination Sum III
Difficulty: Medium
Submission Link: https://leetcode.com/problems/combination-sum-iii/submissions/1379141115/ */

int cap;

void process(int n, int k, int *** res, int * pri, int * combination, int ci, int i)
{
    if (n == 0 && ci == k)
    {
        int size = sizeof(int) * k;
        if (*pri == cap)
        {
            cap += 10;
            *res = realloc(*res, cap * sizeof(int*));
        }

        (*res)[*pri] =  malloc(size);
        memcpy((*res)[*pri], combination, size);        
        (*pri)++;
        return;
    }

    if (n < 0 || ci == k)
        return;

    for (int a = i; a < 9; a++)
    {
        combination[ci] = a + 1;
        process(n - a - 1, k, res, pri, combination, ci + 1, a + 1);        
    }
}



int** combinationSum3(int k, int n, int* returnSize, int** returnColumnSizes){
    cap = 10;
    int ** res = malloc(cap * sizeof(int*));
    int ri = 0;

    int * c = malloc(sizeof(int) * k);
    int ci = 0;

    process(n, k, &res, &ri, c, ci, 0);
    *returnSize = ri;
    *returnColumnSizes = malloc(sizeof(int) * ri);
    for (int i = 0; i < ri; i++)
        (*returnColumnSizes)[i] = k;
    return res;
}