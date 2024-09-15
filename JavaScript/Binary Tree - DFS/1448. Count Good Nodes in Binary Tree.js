/* 1448. Count Good Nodes in Binary Tree
Difficulty: Medium
Submiission Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1388924615/ */

var goodNodes = function (root) {
    if (!root) return 0;

    let numGoodNodes = 0;
    const stack = [];
    stack.push([root, -Infinity]);
    while (stack.length) {
        let [node, max] = stack.pop();
        const { left, right, val } = node;
        if (max <= val) {
            numGoodNodes += 1;
            max = val;
        }

        if (left) stack.push([left, max]);
        if (right) stack.push([right, max]);
    }

    return numGoodNodes;
};