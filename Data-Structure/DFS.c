#include<stdio.h>

void DFS(int x);
int G[10][10],visited[10],n;

void main()
{
    int i,j;
    printf("enter the number of vertices ");
    scanf("%d",&n);

    printf("enter the adjacency matrix of graph");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&G[i][j]);
        }
    }

    printf("DFS traversal");
    for(i=0;i<n;i++){
        visited[i]=0;
    }

    DFS(0);
}

void DFS(int i)
{
    int j;
    printf("%d ",i);
    visited[i]=1;

    for(j=0;j<n;j++){
        if(!visited[j] && G[i][j] == 1){
            DFS(j);
        }
    }
}