""" 649. Dota2 Senate 
Difficulty: Medium
Submission Link: https://leetcode.com/problems/dota2-senate/submissions/1387464896/ """

class Solution(object):
    def predictPartyVictory(self, senate):
        R = deque()
        D= deque()
        l = len(senate)-1
        for s in range(len(senate)):
            if senate[s] == "R":
                R.append(s)
            else:
                D.append(s)

        while R and D:
            r= R.popleft()
            d = D.popleft()
            if r < d :
                R.append(r+l)
            else:
                D.append(d+l)
        
        return "Radiant" if R else "Dire"

        
        