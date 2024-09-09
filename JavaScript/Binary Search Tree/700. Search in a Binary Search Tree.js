/* 700. Search in a Binary Search Tree
Difficulty: Easy
Submission Link: https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/1381341594/ */

var searchBST = function (root, val) {

    let current = root;
    while (current) {
        if (val === current.val) {
            return current;
        } else if (val < current?.val) {
            current = current.left;
        } else {
            current = current.right;
        }
    }
    
    return null;
};