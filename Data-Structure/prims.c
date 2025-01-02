#include <stdio.h>
#include <limits.h>

#define MAX_VERTICES 10

int minkey(int key[], int mstset[], int V)
{
   int min = INT_MAX, minIndex;

   for (int v = 0; v < V; v++){
     if (!mstset[v] && key[v] < min){
         min = key[v];
         minIndex = v;
     }
   }

return minIndex;

}


void primsMST(int graph[MAX_VERTICES][MAX_VERTICES], int V)
{
    int parent[V];
    int key[V];
    int mstSet[V];

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++){
        int u = minkey(key, mstSet, V);
        mstSet[u] = 1;
        for (int v = 0; v < V; v++){
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]){
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    printf("Edge\tWeight\n");

    for (int i = 1; i < V; i++){
        printf("%d - %d\t%d\n", parent[i], i, graph[i][parent[i]]);
    }
}


int main()
{
    int V, E;

    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the number of edges: ");
    scanf("%d", &E);

    printf("Enter the edges (u, v, w) where u and v are vertices and w is the weight:\n");
    
    for (int i = 0; i < E; i++){

        int u, v, w;

        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w;
    }

    primsMST(graph, V);

    return 0;
    
}