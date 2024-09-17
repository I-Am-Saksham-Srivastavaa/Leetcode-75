/* 994. Rotting Oranges
Difficulty: Medium
Submission Link: https://leetcode.com/problems/rotting-oranges/submissions/1385738272/ */

typedef unsigned __int128 Set;
Set fromGrid(int **grid, int nrows, int ncols, int value);
Set singleton(int r, int c);
Set neighbours(Set s);

int orangesRotting(int** grid, int nrows, int* rowlen) {
    Set fresh   = fromGrid(grid, nrows, rowlen[0], 1);
    Set rotten  = fromGrid(grid, nrows, rowlen[0], 2);

    int minutes = 0;
    while (fresh) {
        Set spoiled = fresh & neighbours(rotten);
        if (!spoiled) return -1;
        fresh &= ~spoiled;
        rotten |= spoiled;
        minutes++;
    }

    return minutes;
}

Set ALL = (
        ((Set) 0b011111111110 << ( 0 * 12))
    |   ((Set) 0b011111111110 << ( 1 * 12))
    |   ((Set) 0b011111111110 << ( 2 * 12))
    |   ((Set) 0b011111111110 << ( 3 * 12))
    |   ((Set) 0b011111111110 << ( 4 * 12))
    |   ((Set) 0b011111111110 << ( 5 * 12))
    |   ((Set) 0b011111111110 << ( 6 * 12))
    |   ((Set) 0b011111111110 << ( 7 * 12))
    |   ((Set) 0b011111111110 << ( 8 * 12))
    |   ((Set) 0b011111111110 << ( 9 * 12))
    |   ((Set) 0b011111111110 << (10 * 12))
);

Set singleton(int r, int c) {
    if (0 <= r && r < 10 && 0 <= c && c < 10)
        return (Set) 1 << (12*r + c + 1);
    else
        return 0;
}

Set fromGrid(int **grid, int nrows, int ncols, int value) {
    Set s = 0;
    for (int r = 0; r < nrows; r++)
        for (int c = 0; c < ncols; c++)
            if (grid[r][c] == value)
                s |= singleton(r, c);
    return s;
}

Set neighbours(Set s) {
    return (s << 1 & ALL) | (s >> 1 & ALL) | (s << 12 & ALL) | (s >> 12 & ALL);
}