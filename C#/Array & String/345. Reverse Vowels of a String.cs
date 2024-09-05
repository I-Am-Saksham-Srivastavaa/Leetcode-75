// 345. Reverse Vowels of a String
// Difficulty: Easy
// Submission Link: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1017545529/

public class Solution {
    public string ReverseVowels(string s) {
        char[] charArray = s.ToCharArray();
        int left = 0;
        int right = charArray.Length - 1;
        
        while (left < right) {
            if (IsVowel(charArray[left]) && IsVowel(charArray[right])) {
                char temp = charArray[left];
                charArray[left] = charArray[right];
                charArray[right] = temp;
                left++;
                right--;
            } else if (IsVowel(charArray[left])) {
                right--;
            } else {
                left++;
            }
        }
        
        return new string(charArray);
    }
    
    private bool IsVowel(char c) {
        c = char.ToLower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}