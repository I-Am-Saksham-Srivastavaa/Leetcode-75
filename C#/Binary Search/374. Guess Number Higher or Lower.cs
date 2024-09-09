/* 374. Guess Number Higher or Lower
Difficulty: Me
Submission Link: https://leetcode.com/problems/guess-number-higher-or-lower/submissions/1376858798/ */

public class Solution : GuessGame {
    public int GuessNumber(int n) {
        int low = -1;
        int high = n;

        if(n == 2147483647) {
            return n;
        }

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int result = guess(mid);

            if(result == 0) {
                return mid;
            } else if (result == -1) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        

        return -1;
    }
}