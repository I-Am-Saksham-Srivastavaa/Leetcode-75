""" 841. Keys and Rooms
Difficulty: Medium
Submission Link: https://leetcode.com/problems/keys-and-rooms/submissions/1381349727/ """

class Solution:
    def canVisitAllRooms(self, rooms: list[list[int]]) -> bool:
        n = len(rooms)
        vis = [False] * n
        stack = [0]
        vis[0] = True
        count = 1

        while stack:
            current_room = stack.pop()
            for key in rooms[current_room]:
                if not vis[key]:
                    stack.append(key)
                    vis[key] = True
                    count += 1
        
        return count == n