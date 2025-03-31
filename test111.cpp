#include <bits/stdc++.h>
using namespace std;

bool isSafe(int node, int color[], bool graph[4][4], int n, int col)
{
    for (int k = 0; k < n; k++)
    {
        if (k != node && graph[k][node] == 1 && color[k] == col)
        {
            return false;
        }
    }
    return true;
}
bool solve(int node, int color[], int m, int N, bool graph[4][4])
{
    if (node == N)
    {
        return true;
    }

    for (int i = 1; i <= m; i++)
    {
        if (isSafe(node, color, graph, N, i))
        {
            color[node] = i;
            if (solve(node + 1, color, m, N, graph))
                return true;
            color[node] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[4][4], int m, int n)
{
    int color[n] = {0};
    if (solve(0, color, m, n, graph))
        return true;
    return false;
}

int main()
{
    int n = 4;
    int m = 3;

    bool graph[4][4];
    memset(graph, false, sizeof graph);

    graph[0][1] = 1;
    graph[1][0] = 1;
    graph[0][2] = 1;
    graph[2][0] = 1;
    graph[1][2] = 1;
    graph[2][1] = 1;
    graph[0][3] = 1;
    graph[3][0] = 1;

    int ans = graphColoring(graph, m, n);
    if (ans == 1)
        cout << "Yes the graph can be coloured with " << m << " colors.";

    else
        cout << "No the graph cannot be coloured with " << m << " colors.";
}