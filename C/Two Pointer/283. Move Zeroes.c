/*  283. Move Zeroes
Difficulty: Easy
Submission Link: https://leetcode.com/problems/move-zeroes/submissions/1246679001/ */
void moveZeroes(int* nums, int numsSize) {
    int temp , zeros = 0;

    for(int ind = 0 ; ind < numsSize ; ind++ ) {
        if( nums[ind] == 0 ) zeros++;
    }

    for(int itr = 0 ; itr < zeros ; itr++ ){
        if ( numsSize > 1 ) {
            for( int ind = 0 ; ind < numsSize ; ind++ ) {
                if( (nums[ind] != 0) && (ind + 1 == numsSize) && (nums[ind-1] == 0) ){
                    temp = nums[ind];
                    nums[ind] = nums[ind-1];
                    nums[ind-1] = temp;
                    break;
                }

                else if( (nums[ind] == 0) && ind == numsSize - 1) break;

                else if(nums[ind] == 0) {
                    temp = nums[ind];
                    nums[ind] = nums[ind+1];
                    nums[ind+1] = temp;
                }
            }
        }
    }

}