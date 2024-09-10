""" 841. Keys and Rooms
Difficulty: Medium
Submission Link: https://leetcode.com/problems/keys-and-rooms/submissions/1381349857/ """

class Solution(object):
    def canVisitAllRooms(self, rooms):
        visited = [0]*len(rooms)

        def helper(index, rooms, visited):
            visited[index] = 1
            for i in rooms[index]:
                if visited[i] == 0:
                    helper(i, rooms, visited)
        helper(0, rooms, visited)
        return min(visited)