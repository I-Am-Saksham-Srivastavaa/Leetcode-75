""" 2462. Total Cost to Hire K Workers
Difficulty: Hard
Submission Link: https://leetcode.com/problems/total-cost-to-hire-k-workers/submissions/1390168352/ """

class Solution(object):
    def totalCost(self, costs, k, candidates):
        left = []
        right = []

        for i in range(candidates):
            e = len(costs) - 1 - i

            heapq.heappush(left, (costs[i], i))
            heapq.heappush(right, (costs[e], e))

        i += 1
        e -= 1
        cost = 0

        for rounds in range(k):
            if left and right: 
                if left[0][0] < right[0][0]:
                    curr_min = heapq.heappop(left)
                    cost += curr_min[0]
                    if i <= e:
                        heapq.heappush(left, (costs[i], i))
                        i += 1
                        
                elif left[0][0] > right[0][0]:
                    curr_min = heapq.heappop(right)
                    cost += curr_min[0]
                    if i <= e:
                        heapq.heappush(right, (costs[e], e))
                        e -= 1

                elif left[0][0] == right[0][0]:

                    if left[0][1] == right[0][1]:
                        curr_min = heapq.heappop(left)
                        heapq.heappop(right)
                        cost += curr_min[0]
                        
                        if i <= e:
                            heapq.heappush(left, (costs[i], i))
                            i += 1
                        if i <= e:
                            heapq.heappush(right, (costs[e], e))
                            e -= 1

                    else:
                        if left[0][1] < right[0][1]:
                            curr_min = heapq.heappop(left)
                            cost += curr_min[0]
                            if i <= e:
                                heapq.heappush(left, (costs[i], i))
                                i += 1

            elif left:
                curr_min = heapq.heappop(left)
                cost += curr_min[0]
                if i <= e:
                    heapq.heappush(left, (costs[i], i))
                    i += 1

            elif right:
                curr_min = heapq.heappop(right)
                cost += curr_min[0]
                if i <= e:
                    heapq.heappush(right, (costs[e], e))
                    e -= 1

        return cost

        