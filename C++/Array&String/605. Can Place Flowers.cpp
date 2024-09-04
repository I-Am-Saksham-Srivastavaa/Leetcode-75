// 605. Can Place Flowers
// Difficulty : Easy
// Submmision link: https://leetcode.com/problems/can-place-flowers/submissions/1017423070

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size; ++i) {
            if (flowerbed[i] == 0) {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1;
                    ++count;
                }
            }
        }
        
        return count >= n;
    }
};