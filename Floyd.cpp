#include<stdio.h>
#include<stdlib.h>
int min(int a,int b);
void floyd(int p[10][10],int n)
{
 	int i,j,k;
   	for(k=1;k<=n;k++)
 	for(i=1;i<=n;i++)
  	for(j=1;j<=n;j++)
    {
  	    if(i==j)
        p[i][j]=0;
   	    else
        p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
    }
    printf("\n===========The Distance Matrix=============\n");
    for(i=1;i<=n;i++)
    {
 		  	for(j=1;j<=n;j++)
 			        	printf("\t%d",p[i][j]);
 			  printf("\n");
 		}
}
int min(int a,int b)
{
 if(a<b)
  return(a);
 else
  return(b);
}
main()
{
 int p[10][10],n,i,j;;
 		printf("\n Enter the number of vertices:");
 				scanf("%d",&n);
 		printf("\n Enter the adjacency Matrix\n");
 		for(i=1;i<=n;i++)
 			for(j=1;j<=n;j++)
 				scanf("%d",&p[i][j]);
 		floyd(p,n);
}
