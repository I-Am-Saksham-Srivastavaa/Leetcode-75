/* 933. Number of Recent Calls
Difficulty: Easy
Submission Link: https://leetcode.com/problems/number-of-recent-calls/submissions/1380152807/ */

public class RecentCounter
    {
        private Queue<int> _queue = new Queue<int>();
        public RecentCounter()
        {
            this._queue = new Queue<int>();
        }
        public int Ping(int t) 
        {
            _queue.Enqueue(t);
            while(_queue.Peek() < t - 3000)
            {
                _queue.Dequeue();
            }

            return _queue.Count;
        }
    }