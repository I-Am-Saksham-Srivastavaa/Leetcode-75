/* 437. Path Sum III 
Difficulty: Easy
Submission Link: https://leetcode.com/problems/path-sum-iii/submissions/1388937334/
*/

var pathSum = function (root, targetSum) {
    let nodeCount = 0;

    const dfs = (node, path = []) => {
        if (!node) return;

        const newPath = path.map(value => value + node.val);
        newPath.push(node.val);

        newPath.forEach((value) => {
            if (value === targetSum) {
                nodeCount++;
            }
        })

        dfs(node.left, newPath);
        dfs(node.right, newPath);
    }

    dfs(root);

    return nodeCount;
};