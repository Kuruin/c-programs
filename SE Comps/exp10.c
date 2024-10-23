#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100  // Maximum number of vertices

// Graph structure
struct Graph {
    int numVertices;
    int adj[MAX][MAX];
};

// Create a graph
void createGraph(struct Graph* g, int vertices) {
    g->numVertices = vertices;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            g->adj[i][j] = 0;  // Initialize adjacency matrix
        }
    }
}

// Add an edge to the graph
void addEdge(struct Graph* g, int src, int dest) {
    g->adj[src][dest] = 1;  // For directed graph
    g->adj[dest][src] = 1;  // For undirected graph
}

// BFS implementation
void BFS(struct Graph* g, int start) {
    bool visited[MAX] = { false };
    int queue[MAX], front = 0, rear = 0;

    visited[start] = true;
    queue[rear++] = start;

    printf("BFS: ");
    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < g->numVertices; i++) {
            if (g->adj[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

// DFS helper function
void DFSUtil(struct Graph* g, int vertex, bool visited[]) {
    visited[vertex] = true;
    printf("%d ", vertex);

    for (int i = 0; i < g->numVertices; i++) {
        if (g->adj[vertex][i] == 1 && !visited[i]) {
            DFSUtil(g, i, visited);
        }
    }
}

// DFS implementation
void DFS(struct Graph* g, int start) {
    bool visited[MAX] = { false };
    printf("DFS: ");
    DFSUtil(g, start, visited);
    printf("\n");
}

int main() {
    struct Graph g;
    createGraph(&g, 5);  // Create a graph with 5 vertices

    // Add edges (undirected graph)
    addEdge(&g, 0, 1);
    addEdge(&g, 0, 4);
    addEdge(&g, 1, 2);
    addEdge(&g, 1, 3);
    addEdge(&g, 1, 4);
    addEdge(&g, 2, 3);
    addEdge(&g, 3, 4);

    BFS(&g, 0);  // Start BFS from vertex 0
    DFS(&g, 0);  // Start DFS from vertex 0

    return 0;
}
