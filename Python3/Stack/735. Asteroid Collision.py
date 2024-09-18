""" 735. Asteroid Collision
Difficulty: Medium
Submission Link: https://leetcode.com/problems/asteroid-collision/submissions/1375571425/ """

class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        j = 0
        n = len(asteroids)

        for i in range(n):
            asteroid = asteroids[i]
            while j > 0 and asteroids[j - 1] > 0 and asteroid < 0 and asteroids[j - 1] < abs(asteroid):
                j -= 1

            if j == 0 or asteroid > 0 or asteroids[j - 1] < 0:
                asteroids[j] = asteroid
                j += 1
            elif asteroids[j - 1] == abs(asteroid):
                j -= 1
        return asteroids[:j]