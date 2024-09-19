/* 2336. Smallest Number in Infinite Set
Difficulty: Medium
Submission Link: https://leetcode.com/problems/smallest-number-in-infinite-set/submissions/1387469231/ */

class SmallestInfiniteSet {
private:
    std::set<int> set;
public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++) {
            set.insert(i);
        }
    }

    int popSmallest() {
        if (set.empty()) return -1;

        int min = *set.begin();
        set.erase(set.begin());
        return min;
    }

    void addBack(int num) {
        set.insert(num);
    }
};