""" 216. Combination Sum III
Difficulty: Medium
Submission Link: https://leetcode.com/problems/combination-sum-iii/submissions/1379140403/ """

class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        return(fun(k,n,10))
def fun(k,n,p):
    if(n<=0 or k==1 and n>=p):
        return []
    elif(k==1):
        return([[n]])
    ans=[]
    for i in range(p-1,0,-1):
        a=fun(k-1,n-i,i)
        for x in a:
            ans.append(x+[i])
    return ans