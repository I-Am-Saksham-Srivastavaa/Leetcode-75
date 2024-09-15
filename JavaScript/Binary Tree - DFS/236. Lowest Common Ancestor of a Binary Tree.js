/* 236. Lowest Common Ancestor of a Binary Tree
Difficulty: Medium
Submission Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/1388949355/
*/

function lowestCommonAncestor(root, p, q) 
{
    if (!root || root === p || root === q) return root;
    var resL = lowestCommonAncestor(root.left, p, q);
    var resR = lowestCommonAncestor(root.right, p, q);
    return (resL && resR) ? root : (resL || resR);
}