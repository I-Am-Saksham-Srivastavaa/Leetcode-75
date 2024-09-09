/* 199. Binary Tree Right Side View
Difficulty: Medium
Submission Link: https://leetcode.com/problems/binary-tree-right-side-view/submissions/1381335819/ */

var rightSideView = function(root) {
    if(!root)
        return []

    const arr = []
    const q = [root]

    while (q.length){
        let rightmost = 0
        let n = q.length
        for (let u = 0; u < n; ++u){
            let node = q.shift()
            rightmost = node.val
            if (node.left)
                q.push(node.left)
            if (node.right)
                q.push(node.right)
        }
        arr.push(rightmost)
    }
    return arr
};