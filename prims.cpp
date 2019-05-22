#include <stdio.h>
#include <stdlib.h>
int ne=1,min,mincost,cost[10][10],visited[10],u,v,a,b,n,i,j;
main()
{
    printf("\n Enter the no. of vertices \n");
    scanf("%d",&n);
    printf("\n Enter the cost matrix \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            cost[i][j]==999;
        }
    }
    printf("The edges of spanning tree are: \n");
    visited[i]=1;
    while(ne<n)
    {

        for(i=1,min=999;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(cost[i][j]<min)
            {
            	if (visited[i]==0)
            	continue;
        	}
        	else
        	{
            min=cost[i][j];
            a=u=i;
            b=v=j;
        	}
    	}
	}
	}	
    if(visited[v]==0)
    {
	    printf("%d Edge(%d%d)=%d",ne++,a,b,min);
    mincost+=min;
    visited[b]=1;
	}
    cost[b][a]=cost[a][b]=999;
    printf("\n Minimum cost=%d",mincost);
}
