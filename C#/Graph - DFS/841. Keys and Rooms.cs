/* 841. Keys and Rooms
Difficulty: Medium
Submission Link: https://leetcode.com/problems/keys-and-rooms/submissions/1381350216/
*/

public class Solution {
    public bool CanVisitAllRooms(IList<IList<int>> rooms) {
        int n = rooms.Count;
        bool[] visited = new bool[n];

        VisitRoom(rooms, 0, visited);

        for (int i = 0; i < n; i++) {
            if (!visited[i])
                return false;
        }

        return true;
    }

    private void VisitRoom(IList<IList<int>> rooms, int room, bool[] visited) {
        if (visited[room])
            return;

        visited[room] = true;
        foreach (var key in rooms[room])
            VisitRoom(rooms, key, visited);
    }
}