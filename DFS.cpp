#include<stdio.h>
int i,j,v,n;
int cost[9][9],visited[9];
void dfs(int v)
 {
 	int w;
	visited[v]=1;
	for(w=1;w<=n;w++)
	{
		if(cost[v][w]&&(visited[w]==0))
		{
			visited[w]=1;
			printf("%d\t",w);
			dfs(w);
		}
	}
}
main()
{
	int flag=0;
	printf("The no of vertices:\t");
	scanf("%d",&n);
	printf("The adjacency matrix:\t");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{ 
  		scanf("%d",&cost[i][j]);
	}
	for(i=1;i<=n;i++)
	visited[i]=0;
	printf("\nThe starting vertex is \t");
	scanf("%d",&v);
	dfs(v);
	for(i=1;i<=n;i++)
	if(visited[i]==1)
	{
		flag=1;
	}
	else
	{
		flag=0;
		break;
	}
	if(flag==1)
	printf("Graph is connected\n");
	else
	printf("Graph is disconnected\n");
} 
 
