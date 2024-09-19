""" 2336. Smallest Number in Infinite Set
Difficulty: Medium
Submission Link: https://leetcode.com/problems/smallest-number-in-infinite-set/submissions/1387469125/ """

class SmallestInfiniteSet(object):

    def __init__(self):
        self.counter = 1
        self.add_back = [] 

    def popSmallest(self):
        if self.add_back and self.add_back[0] < self.counter:
            return heapq.heappop(self.add_back)
        else:
            self.counter += 1
            return self.counter - 1
        

    def addBack(self, num):
        if num < self.counter and num not in self.add_back:
            heapq.heappush(self.add_back, num) 