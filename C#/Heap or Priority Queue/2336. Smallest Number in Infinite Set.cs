/* 2336. Smallest Number in Infinite Set
Difficulty: Medium
Submission Link: https://leetcode.com/problems/smallest-number-in-infinite-set/submissions/1387469446/ */

public class SmallestInfiniteSet {

    PriorityQueue<int, int> heap = new ();
    HashSet<int> itemsRemove = new HashSet<int>();

    public SmallestInfiniteSet() {
       for(int i = 1; i <= 1000; i++)
       {
           heap.Enqueue(i, i);
       }
    }
    
    public int PopSmallest() {  
        int min = heap.Dequeue();
        itemsRemove.Add(min);
        return min;
    }
    
    public void AddBack(int num) {
        int min = heap.Peek();
        if(min > num)
        {
            heap.Enqueue(num, num);
            itemsRemove.Remove(min);  
        }else if(min < num)
        {
            if(itemsRemove.Contains(num))
            {
                heap.Enqueue(num, num);
                itemsRemove.Remove(min);
            }
        }
    }
}