/* 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380151895/ */

var RecentCounter = function () {
    this.q = [];
};

RecentCounter.prototype.ping = function (t) {
    this.q.push(t);
    while (this.q[0] < t - 3000) {
        this.q.shift();
    }
    return this.q.length;
};