 /* 735. Asteroid Collision
Difficulty: Medium
Submission Link: https://leetcode.com/problems/asteroid-collision/submissions/1375571805/ */

public class Solution {
    public int[] AsteroidCollision(int[] asteroids) {
        int j = 0;
        int n = asteroids.Length;

        for (int i = 0; i < n; i++) {
            int asteroid = asteroids[i];

            while (j > 0 && asteroids[j - 1] > 0 && asteroid < 0 && asteroids[j - 1] < Math.Abs(asteroid)) {
                j--;
            }

            if (j == 0 || asteroid > 0 || asteroids[j - 1] < 0) {
                asteroids[j++] = asteroid;
            } else if (asteroids[j - 1] == Math.Abs(asteroid)) {
                j--;
            }
        }

        int[] result = new int[j];
        Array.Copy(asteroids, result, j);

        return result;
    }
}