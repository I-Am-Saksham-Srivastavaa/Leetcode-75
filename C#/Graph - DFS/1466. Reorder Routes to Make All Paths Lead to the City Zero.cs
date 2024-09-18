/* 1466. Reorder Routes to Make All Paths Lead to the City Zero
Difficulty: Medium
Submission Link: https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/submissions/1391179353/ */

public class Solution
{
    private readonly Dictionary<int, List<(int city, bool direction)>> _graph = new();
    private readonly HashSet<int> _visited = new();
    private int _result;

    public int MinReorder(int n, int[][] connections)
    {
        foreach (var connection in connections)
        {
            var cityA = connection[0];
            var cityB = connection[1];

            _graph[cityA] = _graph.GetValueOrDefault(cityA, new List<(int, bool)>());
            _graph[cityA].Add((cityB, true));

            _graph[cityB] = _graph.GetValueOrDefault(cityB, new List<(int, bool)>());
            _graph[cityB].Add((cityA, false));
        }
        
        dfs(0);

        return _result;
    }

    private void dfs(int city)
    {
        _visited.Add(city);

        foreach (var (node, direction) in _graph[city])
        {
            if (_visited.Contains(node)) continue;

            if (direction)
            {
                ++_result;
            }

            dfs(node);
        }
    }
}