#include <stdio.h>
#include <stdlib.h>
int min,min_cost,cost[10][10],parent[10],ne=1;
main()
{
    int n,i,j,a,u,b,v;
    printf("\n Enter the no. of vertices \n");
    scanf("%d",&n);
    printf("\n Enter the cost matrix \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]=999;
        }
    }
    while(ne<n)
    {

        for(i=1,min=999;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(cost[i][j]<min)
            min=cost[i][j];
            a=u=i;
            b=v=j;
        }
    }
    while(parent[u])
        u=parent[u];
    while(parent[v])
        v=parent[v];
    if(u!=v)
        printf("Edge(%d%d)=%d",a,b,min);
    min_cost+=min;
    parent[v]=u;
    cost[a][b]=cost[b][a]=999;
    printf("\n Minimum cost=%d",min_cost);
	}
}
