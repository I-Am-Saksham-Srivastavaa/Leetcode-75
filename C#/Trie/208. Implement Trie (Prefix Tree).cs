/* 208. Implement Trie (Prefix Tree)
Difficulty: Medium
Submisssion Link: https://leetcode.com/problems/implement-trie-prefix-tree/submissions/1387457625/ */

public class Trie
{
  HashSet<string> values;
  HashSet<string> keys;
  public Trie()
  {
    values = new HashSet<string>();
    keys = new HashSet<string>();
  }
    
  public void Insert(string word)
  {
    if (!values.Contains(word))
      values.Add(word);
    for (var i = word.Length; i > 0; i--)
    {
      if (!keys.Contains(word.Substring(0,i)))
        keys.Add(word.Substring(0,i));
      else
        break;
    }
  }
    
  public bool Search(string word)
  {
    return values.Contains(word);
  }
    
  public bool StartsWith(string prefix)
  {
    return keys.Contains(prefix);
  }
}