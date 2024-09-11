/* 215. Kth Largest Element in an Array 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1382363311/ */

int findKthLargest(int* nums, int numsSize, int k) 
{
    int PositivArr [10001] = {0};
    int NegativeArr [10001] = {0};
    int greatest = 0;
    int result = 0;
    bool flag = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] >= 0)
        {
            PositivArr[nums[i]]++;
        }
        else
        {
            NegativeArr[abs(nums[i])]++;
        }
    }

    for(int i = 10000; i >= 0; i--)
    {
        greatest += PositivArr[i];
        if(greatest >= k)
        {
            result = i;
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        for(int i = 1; i <= 10001; i++)
        {
            greatest += NegativeArr[i];
            if(greatest >= k)
            {
                result = -i ;
                break;
            }
        }
    }
    return result;
}