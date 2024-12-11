#include<stdio.h>
#define MAX 1000

int parent[MAX];

void makeSet(int n)
{
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
}


int find(int x)
{
    while(x!=parent[x]){
        x=parent[x];
    }
    return x;
}


void unionSet(int x,int y)
{
    int rootX=find(x);
    int rootY=find(y);

    if(rootX!=rootY){
        parent[rootX]=rootY;
    }
}


int isConnected(int x, int y)
{
    return find(x) == find(y);
}


int main()
{
    int n=10;
    makeSet(n);

    unionSet(1,2);
    unionSet(3,4);
    unionSet(2,3);

    printf("\n Are 1 and 4 connected ? %s",isConnected(1,4) ? "yes" : "no");
    printf("\n Are 1 and 5 connected  ? %s",isConnected(1,5) ? "yes" : "no");
    
    return 0;
}