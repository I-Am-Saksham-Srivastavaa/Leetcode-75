/* 1268. Search Suggestions System
Difficulty: Medium
Submission Link: https://leetcode.com/problems/search-suggestions-system/submissions/1383577158/ */

int bsleft(char** s,char target, int pos, int left, int right)
{
    int result=-1;
    for(;left<=right;)
    {
        int mid = (left+right)/2;
        char c = 0;
        if(strlen(s[mid]) > pos) c = s[mid][pos];
        if(c == target) result=mid;
        if(c >= target)
        {
            result = mid;
            right = mid-1;
        }
        else left = mid+1;
    }
    return result;
}
int bsright(char** s,char target, int pos, int left, int right)
{
    int result=-1;
    for(;left<=right;)
    {
        int mid = (left+right)/2;
        char c = 0;
        if(strlen(s[mid]) > pos) c = s[mid][pos];
        if(c == target) result=mid;
        if(c > target)
        {
            result = mid;
            right = mid-1;
        }
        else left = mid+1;
    }
    return result;
}
int cmp(const void* a, const void* b)
{
    return strcmp(*((char**)a),*((char**)b));
}

char*** suggestedProducts(char** products, int productsSize, char* searchWord, int* returnSize, int** returnColumnSizes) 
{
    qsort(products,productsSize,sizeof(char*),cmp);
    int slen = strlen(searchWord);
    char*** res = (char***)malloc(sizeof(char**)*slen);
    int* nres = (int*)malloc(sizeof(int)*slen);
    for(int i=0;i<slen;++i) 
    {
        res[i] = (char**)malloc(sizeof(char*)*3);
        res[i][0]=0;
        nres[i]=0;
    }

    int left = 0;
    int right = productsSize-1;
    for(int pos = 0; pos < slen; ++pos)
    {
        left = bsleft(products,searchWord[pos], pos, left, right);
        right = bsright(products,searchWord[pos], pos, left, right);
        if(left==-1) break;

        nres[pos]=0;
        for(int i=left;i<=right;++i)
        {
            if(strlen(products[i])<=pos || products[i][pos] != searchWord[pos]) break;
            res[pos][nres[pos]++] = products[i];
            if(nres[pos]>=3) break;
        }
       
    }    

    *returnSize = slen;
    *returnColumnSizes = nres;
    return res;
}