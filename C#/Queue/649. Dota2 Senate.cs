/* 649. Dota2 Senate 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/dota2-senate/submissions/1387465228/ */

public class Solution {
    List<char> list = new List<char>();
    
    public string PredictPartyVictory(string senate) {

        foreach (var item in senate)
            list.Add(item);

        while (list.Count > 1)
        {
            if (list[0] == 'R')
            {
                if(list.Contains('D'))
                    removeChar('D');
                else
                    return "Radiant";
            }
            else
            {
                if (list.Contains('R'))
                    removeChar('R');
                else
                    return "Dire";
            }
        }
        
        if (list[0] == 'D')
            return "Dire";
        return "Radiant";
    }

    public void removeChar(char ch) {
        list.Remove(ch);
        list.Add(list[0]);
        list.RemoveAt(0);
    }

}