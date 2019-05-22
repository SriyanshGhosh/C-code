#include<stdio.h>
int v[20][20],values[23],weight[45];
int max(int m,int n)
{
  if(m>=n) return m;
  else return n; 
} 
int knapsack(int i, int j)
{
 int value;
 if(v[i][j]<0) 
 {
  if(j-weight[i]>=0)
   {
     value=max(knapsack(i-1,j),(values[i]+knapsack(i-1,j-weight[i])));
   }
    else
	{
	  value=knapsack(i-1,j);
	}
	  v[i][j]=value; 
}
return v[i][j];
}
 main()
 {
  int n,i,j,w,profit;
  printf("enter the no of elements:\n");
  scanf("%d", &n);
  printf("enter the capacity\n");  
  scanf("%d", &w); 
  printf("enter the weights\n"); 
  for(i=1; i<=n; i++) 
  {
   scanf("%d",&weight[i]);
  }
  printf("enter the profits\n");
  for(i=1;i<=n;i++)
  {
   scanf("%d",&values[i]);
  }
   for(i=0;i<=n;i++)  
   for(j=0;j<=w;j++){
   if(i==0||j==0) v[i][j]=0;
   else v[i][j]=-1;}
   profit=knapsack(n,w);
   printf("the value is %d\n",profit);
 } 
