#include <stdio.h>
#define MAX 100

void BFS(int graph[MAX][MAX], int start, int n);

int main()
{
    int graph[MAX][MAX];
    int n, start;
    
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);
    
    BFS(graph, start, n);
    return 0;

}


void BFS(int graph[MAX][MAX], int start, int n) 
{
    int queue[MAX], front = 0, rear = 0;
    int visited[MAX] = {0};
    
    
    visited[start] = 1;
    queue[rear++] = start;
    
    
    printf("BFS Traversal: ");
    
    while (front < rear) {
        
        int current = queue[front++];

        printf("%d ", current);

        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
               visited[i] = 1;
               queue[rear++] = i;
            }
        }
    }

printf("\n");

}