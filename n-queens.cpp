#include<stdio.h>
#include<stdlib.h>
const  int  max=20;
int   place(int x[],int k)
{
	int i;
	for(i=0;i<k;i++)
	if (x[i]==x[k] || abs(x[i]-x[k])==abs(i-k)) 
	return 0;
	return 1;
}
void display(int x[], int n)
{
	char chessb[max][max];int i,j; 
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	chessb[i][j]='x'; 
	for(i=0;i<n;i++) 
	chessb[i][x[i]]='q';
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++) 
		printf("%c", chessb[i][j]); 
		printf ("\n");
	}
	printf ("\n");
}
void     nqueens(int n) 
{
	int x[max];
	int k;
	x[0]=-1;
	k=0;
	while(k>=0) 
	{
		x[k]=x[k]+1;
		while(x[k]<n && !place(x,k)) 
		x[k]=x[k]+1;
		if(x[k]<n)
		if (k==n-1) 
		display(x,n); 
		else 
		{
		   k++; 
		   x[k]=-1; 
		}
		else 
		k--;
	}
}
main()
{
	int n;
	printf("enter the no of queens\n");
	scanf("%d", &n);
	printf("the soln to %d queens problem is \n", n);
	nqueens(n); 
} 
 
