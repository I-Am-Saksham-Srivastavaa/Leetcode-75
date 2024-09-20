/* 2130. Maximum Twin Sum of a Linked List
Difficulty: Medium
Submission Link:https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/1387473829/ */

int maxVowels(char* s, int k) {
    int max=0;
    for(int i=0;i<k;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            max++;
        }
    }
    int temp=max;
    int right=k;
    while(s[right]!='\0'){
        if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
            temp++;
        }
        if(s[right-k]=='a' || s[right-k]=='e' || s[right-k]=='i' || s[right-k]=='o' || s[right-k]=='u'){
            temp--;
        }
        if(max<temp){
            max=temp;
        }
        right++;
    }
    return max;
}