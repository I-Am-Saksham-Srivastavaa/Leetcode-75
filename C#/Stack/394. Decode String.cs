/* 394. Decode String
Difficulty: Medium
Submission Link: https://leetcode.com/problems/decode-string/submissions/1375591442/ */

public class Solution {
    public string DecodeString(string s) {
        var stackStr = new Stack<string>();
        var stackNum = new Stack<int>();
        var i = 0;
        while(i < s.Length)
        {
            if(s[i] == '[')
            {
                stackStr.Push(s[i].ToString());
            }
            else if(s[i] == ']')
            {
                var sb = new StringBuilder();
                while(stackStr.Count >0)
                {
                    var tempStr = stackStr.Pop().ToString();
                    if(tempStr != "[")
                    {
                        sb.Insert(0,tempStr);
                    }
                    else
                    {
                        var tempNum = stackNum.Pop();
                        var tempResult = "";
                        while(tempNum > 0)
                        {
                            tempResult += sb.ToString();
                            tempNum--;
                        }
                        stackStr.Push(tempResult);
                        break;
                    }
                }
            }
            else if(Char.IsDigit(s[i]))
            {
                var num = Convert.ToInt32(s[i].ToString());
                var j = i+1;
                while(j < s.Length && Char.IsDigit(s[j]))
                {
                    num = num *10 + Convert.ToInt32(s[j].ToString());
                    j++;
                }
                i = j-1;
                stackNum.Push(num);
            }
            else
            {
                stackStr.Push(s[i].ToString());
            }
            i++;
        }
        var result = new StringBuilder();
        while(stackStr.Count > 0)
        {
            result.Insert(0, stackStr.Pop());
        }
        return result.ToString();
    }
}