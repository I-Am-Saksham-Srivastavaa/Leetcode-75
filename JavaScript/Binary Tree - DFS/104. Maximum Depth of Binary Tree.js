/* 104. Maximum Depth of Binary Tree
Difficulty: Easy
Sumbission Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/1386398870/
*/

var maxDepth = function (root)
 {
    if (!root) return 0

    let leftSubHeight = maxDepth(root.left)
    let rightSubHeight = maxDepth(root.right)
    
    return Math.max(leftSubHeight, rightSubHeight) + 1
};