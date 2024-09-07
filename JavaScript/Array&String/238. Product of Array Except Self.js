/* 238. Product of Array Except Self 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/product-of-array-except-self/submissions/1030277210/
*/
var productExceptSelf = function (nums) {

    let result = [];
    let left = 1;
    let right = 1;
  
    for (let i = 0; i < nums.length; i++) {
      result[i] = left;
      left *= nums[i];
    }
  
    for (let i = nums.length - 1; i >= 0; i--) {
      result[i] *= right;
      right *= nums[i];
    }
  
    return result;
  };

  module.exports = productExceptSelf;