#include<stdio.h>
int cost[10][10],n,source,q[10],f,r,s[10],i,j,u,v;
void bfs()
{
	for(i=1;i<=n;i++)
	s[i]=0;
	f=r=0;
	q[r]=source;
	s[source]=1;
	while(f<=r)
	{
		u=q[f++];
		for(v=1;v<=n;v++)
		{
			if(cost[u][v]&&s[v]==0)
			{
				s[v]=1;
				q[++r]=v;
			}
		}
	}
}
main()
{
	printf("\nEnter no of vertices\t");
	scanf("%d",&n);
	printf("\nEnter Adjacency Matrix\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);
	printf("\nEnter the Source\t");
	scanf("%d",&source);
	bfs();
	for(i=1;i<=n;i++)
	{
		if(s[i]==0)
			printf("\nVertes %d Not Reachable\n",i);
		else
			printf("\nVertes %d Reachable\n",i);
	}
}
