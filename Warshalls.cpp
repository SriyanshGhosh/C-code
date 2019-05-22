#include<stdio.h>
void warshall(int c[10][10],int n)
{
 int i,j,k;
 for(k=1;k<=n;k++)
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 c[i][j]=(c[i][j] || (c[i][k] && c[k][j]));
}
 main()
 {
  int c[10][10],i,j,n;
  printf("Enter the numb of veritces\n");
  scanf("%d",&n);
  printf("Enter the adjacency matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  scanf("%d",&c[i][j]);
  warshall(c,n);
  printf("The path matrix is\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++) 
    printf("%d\t",c[i][j]);
	printf("\n");
  }
} 
