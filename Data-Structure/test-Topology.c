#include <stdio.h>

void DFS(int v); 

int G[10][10], visited[10], stack[10], top = -1, n; 

void main() {
    int i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    // Initialize visited array
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Topological Sorting: ");

    // Perform DFS for each unvisited vertex
    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            DFS(i);
        }
    }

    // Print vertices in topological order
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }
    printf("\n");
}


void DFS(int v) {
    visited[v] = 1;

    for (int j = 0; j < n; j++) {
        if (!visited[j] && G[v][j] == 1) {
            DFS(j);
        }
    }

    // Push the vertex onto the stack after processing all its neighbors
    stack[++top] = v;
}
