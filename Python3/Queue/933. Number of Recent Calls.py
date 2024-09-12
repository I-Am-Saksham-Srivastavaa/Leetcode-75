""" 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380152233/ """

class RecentCounter:

    def __init__(self):
        self.q = deque()

    def ping(self, t: int) -> int:
        self.q.append(t)
        while self.q[0] < t - 3000:
            self.q.popleft()
        return len(self.q)