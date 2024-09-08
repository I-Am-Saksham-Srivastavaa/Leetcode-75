/* 1732. Find the Highest Altitude
Difficulty: Easy
Submission Link: https://leetcode.com/problems/find-the-highest-altitude/submissions/1379774149/ */

int largestAltitude(int* gain, int gainSize){
    int max = 0;
    int temp = 0;
    for(int i=0;i<gainSize;i++){
        temp += gain[i];
        if(temp > max){
            max = temp;
        }
    }
    return max;
}