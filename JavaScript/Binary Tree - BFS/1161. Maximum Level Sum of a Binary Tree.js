/* 1161. Maximum Level Sum of a Binary Tree 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/submissions/1385722825/ */

var maxLevelSum = function(root) {
    const sums = [];

    const traverse = (node, depth) => {
        if (!node) {
            return;
        }

        sums[depth] = (sums[depth] ?? 0) + node.val;

        traverse(node.left, depth + 1);
        traverse(node.right, depth + 1);
    }
    traverse(root, 0);
    return sums.findIndex((el) =>  el === Math.max(...sums)) + 1;
};