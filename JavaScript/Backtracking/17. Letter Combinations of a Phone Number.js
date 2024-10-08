/* Letter Combinations of a Phone Number
Difficulty: Medium
Submission Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1379130936 */

const L = {'2':"abc",'3':"def",'4':"ghi",'5':"jkl",
    '6':"mno",'7':"pqrs",'8':"tuv",'9':"wxyz"}

var letterCombinations = function(D) {
   let len = D.length, ans = []
   if (!len) return []
   const dfs = (pos, str) => {
       if (pos === len) ans.push(str)
       else {
           let letters = L[D[pos]]
           for (let i = 0; i < letters.length; i++)
               dfs(pos+1,str+letters[i])
       }
   }
   dfs(0,"")
   return ans
};