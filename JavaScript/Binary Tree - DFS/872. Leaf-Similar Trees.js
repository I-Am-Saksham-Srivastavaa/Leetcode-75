/* 872. Leaf-Similar Trees
Difficulty: Easy
Submission Link: https://leetcode.com/problems/leaf-similar-trees/submissions/1141614376/ */

var leafSimilar = function(root1, root2) {
    const dfs = (root) => {
            if (root === null) {
                return [];
            }
            const leaves = dfs(root.left).concat(dfs(root.right));
            return leaves.length > 0 ? leaves : [root.val];
        };
        return JSON.stringify(dfs(root1)) === JSON.stringify(dfs(root2));
};