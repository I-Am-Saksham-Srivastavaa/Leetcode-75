/* 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380152559/ */

class RecentCounter {
public:
    std::queue<int> q;

    RecentCounter() {}

    int ping(int t) {
        q.push(t);
        while (q.front() < t - 3000) {
            q.pop();
        }
        return q.size();
    }
};