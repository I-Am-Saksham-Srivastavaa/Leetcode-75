/*  841. Keys and Rooms
Difficulty: Medium
Submission Link: https://leetcode.com/problems/keys-and-rooms/submissions/1381349579/ */

var canVisitAllRooms = function (rooms) {

    let vis = new Array(rooms.length), stack = [0], count = 1
    vis[0] = 1
    while (stack.length) {
        let keys = rooms[stack.pop()]
        for (let k of keys)
            if (!vis[k]) stack.push(k), vis[k] = 1, count++
    }
    return rooms.length === count
};