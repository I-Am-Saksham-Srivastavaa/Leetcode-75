/* Non-overlapping Intervals
Difficulty: Medium
Submission Link: https://leetcode.com/problems/non-overlapping-intervals/submissions/1387451992/
 */

struct Interval {
    int start;
    int end;
};
int compare(const void *a, const void *b) {
    int s1 = ((struct Interval *)a)->start;
    int s2 = ((struct Interval *)b)->start;
    return s1-s2;
}
int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize) {
    int ans = 0;
    struct Interval *points = malloc(intervalsSize * sizeof(struct Interval));
    for (int i=0; i<intervalsSize; i++){
        points[i].start = intervals[i][0];
        points[i].end = intervals[i][1];
    }
    qsort(points,intervalsSize,sizeof(points[0]),compare);
    int prevEnd = points[0].end;
    int res = 0;
    for (int i = 1;i<intervalsSize;i++) {
        int start = points[i].start;
        int end = points[i].end;
        if (prevEnd <= start) {
            prevEnd = end;
        } else {
            res++;
            prevEnd = end < prevEnd ? end : prevEnd;
        }
    }
    return res;
}