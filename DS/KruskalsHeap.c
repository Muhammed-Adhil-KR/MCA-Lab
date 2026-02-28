#include<stdio.h>
#include<stdlib.h>
int parent[100],rank[100];
int find(int x)
{
    if(parent[x]!=x){
        parent[x]=find(parent[x]);
    }
    return parent[x];
}
void unionSets(int x,int y)
{
    int xRoot=find(x);
    int yRoot=find(y);
    if(xRoot==yRoot)
         return;
    if(rank[xRoot]<rank[yRoot])
    {
        parent[xRoot]=yRoot;
    }
    else if(rank[xRoot]>rank[yRoot])
    {
        parent[yRoot]=xRoot;
    }
    else
    {
        parent[yRoot]=xRoot;
        rank[xRoot]++;
    }
}
void main()
{
    int cost[100][100],t[100][2],heap[100][4],n,i,j,k=0,m,mincost=0,t1,t2,t3,u,v;
    printf("\nEnter the number of vertices:");
    scanf("%d",&n);
    printf("\nEnter the cost(between 1-99)of each edges!\n(If no edge then enter 100): ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\nCost(%d,%d):",i,j);
            scanf("%d",&cost[i][j]);
            if(cost[i][j]<100){
                k++;
                heap[k][1]=i;
                heap[k][2]=j;
                heap[k][3]=cost[i][j];
            }
        }
    }
    m=k;
    for(i=1;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            if(heap[i][3]>heap[j][3]){
                t1=heap[i][1];
                heap[i][1]=heap[j][1];
                heap[j][1]=t1;
                t2=heap[i][2];
                heap[i][2]=heap[j][2];
                heap[j][2]=t2;
                t3=heap[i][3];
                heap[i][3]=heap[j][3];
                heap[j][3]=t3;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
    j=0;
    for(i=1;i<=m&&j<n-1;i++)
    {
        u=find(heap[i][1]);
        v=find(heap[i][2]);
        if(u!=v)
        {
            j++;
            t[j][1]=heap[i][1];
            t[j][2]=heap[i][2];
            mincost=mincost+heap[i][3];
            unionSets(u,v);
        }
    }
    printf("\nSpanning tree is :-\n\n");
    for(i=1;i<n;i++)
    {
        printf("(%d -> %d) cost: %d\n",t[i][1],t[i][2],cost[t[i][1]][t[i][2]]);
    }
    printf("\nminimum cost: %d \n",mincost);
}
