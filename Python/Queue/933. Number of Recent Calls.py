""" 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380152389/ """

class RecentCounter(object):

    def __init__(self):
        self.calls = deque()
    def ping(self, t):
        self.calls.append(t)
        while self.calls  and  t - 3000 > self.calls[0]:
           self.calls.popleft()

        return len(self.calls)   