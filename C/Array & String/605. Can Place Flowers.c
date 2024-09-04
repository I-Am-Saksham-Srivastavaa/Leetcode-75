//605. Can Place Flowers
//Difficulty : Easy
//Submmision link: https://leetcode.com/problems/can-place-flowers/submissions/1017421147

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;
    
    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0) {
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                count++;
            }
        }
    }
    
    return count >= n;
}