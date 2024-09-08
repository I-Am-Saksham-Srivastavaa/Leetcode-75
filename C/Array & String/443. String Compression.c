/* 443. String Compression
Difficulty: Medium
Submission Link: https://leetcode.com/problems/string-compression/submissions/1030284831/
 */

int compress(char * const chars, const int charsLen){
	int newCharsLen = 0;

	for (int i = 0; i < charsLen; ){
		const char curChar = chars[i];
		i += 1;

		int curCharCnt = 1;
		while (i < charsLen && curChar == chars[i]){
			curCharCnt += 1;
			i += 1;
		}

		chars[newCharsLen] = curChar;
		newCharsLen += 1;

		if (curCharCnt > 1){
			char digits[10];
			int digitsLen = 0;
			while (curCharCnt > 0){
				digits[digitsLen] = curCharCnt % 10 + '0';
				digitsLen += 1;

				curCharCnt /= 10;
			}

			for (int j = digitsLen - 1; j >= 0; j -= 1){
				chars[newCharsLen] = digits[j];
				newCharsLen += 1;
			}
		}
	}

	return newCharsLen;
}