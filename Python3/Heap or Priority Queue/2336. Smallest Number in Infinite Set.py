""" 2336. Smallest Number in Infinite Set
Difficulty: Medium
Submission Link: https://leetcode.com/problems/smallest-number-in-infinite-set/submissions/1387468961/ """

class SmallestInfiniteSet:
    def __init__(self):
        self.set = set(range(1, 1001))

    def popSmallest(self) -> int:
        if not self.set:
            return None

        min_val = min(self.set)
        self.set.remove(min_val)
        return min_val

    def addBack(self, num: int) -> None:
        self.set.add(num)