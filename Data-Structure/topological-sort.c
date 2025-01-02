#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum number of vertices

int adj[MAX][MAX];  // Adjacency matrix
int visited[MAX];   // Visited array
int stack[MAX];     // Stack for topological sorting
int top = -1;       // Stack pointer

// Function to add an edge to the graph
void addEdge(int u, int v) 
{
    adj[u][v] = 1;
}

// Function to perform DFS
void dfs(int v, int n) 
{
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i]) {
            dfs(i, n);
        }
    }

    // Push the vertex to stack after all its neighbors are processed
    stack[++top] = v;
}

// Function to perform Topological Sort
void topologicalSort(int n)
 {
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, n);
        }
    }

    // Print the vertices in topological order
    printf("Topological Order: ");
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }
    printf("\n");
}

// Main function
int main() {
    int n, edges, u, v;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // Initialize adjacency matrix and visited array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
        visited[i] = 0;
    }

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (u v) (0-based index):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);

    }

    topologicalSort(n);

    return 0;
}