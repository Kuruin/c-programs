#include <stdio.h>
#include <limits.h>

#define V 4

int tsp(int graph[V][V], int visited[], int pos, int count, int cost, int start)
{
    if (count == V && graph[pos][start])
    {
        return cost + graph[pos][start];
    }

    int ans = INT_MAX;

    for (int city = 0; city < V; city++)
    {
        if (!visited[city] && graph[pos][city])
        {
            visited[city] = 1;
            int newCost = tsp(graph, visited, city, count + 1, cost + graph[pos][city], start);
            ans = (newCost < ans) ? newCost : ans;
            visited[city] = 0;
        }
    }

    return ans;
}

int main()
{
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}};

    int visited[V] = {0};
    visited[0] = 1;

    int minCost = tsp(graph, visited, 0, 1, 0, 0);

    printf("Minimum cost to visit all cities: %d\n", minCost);

    return 0;
}
