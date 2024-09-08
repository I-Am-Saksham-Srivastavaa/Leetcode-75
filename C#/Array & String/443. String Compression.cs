/* 443. String Compression
Difficulty: Medium
Submission Link: https://leetcode.com/problems/string-compression/submissions/1030285250/ */

public class Solution {
    public int Compress(char[] chars) {
        int len = chars.Length;
        if (len == 0) return 0;

        char temp = chars[0];
        int count = 1;
        int res = 0;

        for (int i = 1; i <= len; i++) 
        {
            if (i < len && chars[i - 1] == chars[i]) count++;
            else 
            {
                chars[res] = temp;
                res += 1;

                string countStr = count.ToString();
                if (count > 1) 
                {
                    for (int j = 0; j < countStr.Length; j++) 
                        chars[res + j] = countStr[j];

                    res += countStr.Length;
                }

                if (i < len) temp = chars[i];
                count = 1;
            }
        }

        return res;
    }
}