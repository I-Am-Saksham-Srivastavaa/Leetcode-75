/* 2352. Equal Row and Column Pairs
Difficulty: Medium
Submission Link: https://leetcode.com/problems/equal-row-and-column-pairs/submissions/1385750832/
*/

var equalPairs = function (grid) {
    let res = 0
    for (let i = 0; i < grid.length; ++i) {
        let row = grid[i].join()
        for (let j = 0; j < grid.length; ++j) {
            let col = grid.map((v) => v[j]).join()
            if (col == row) {
                res++
            }
        }
    }
    return res
};