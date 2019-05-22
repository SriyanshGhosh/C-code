#include<stdio.h>
int adj[10][10];
int Reach[10];
int order[10];
int m=1,n;
void TopologicalSort()
{
    int i,j,k,x;
    for(x=1;x<=n;x++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                if(adj[j][i]==1) 
				break;
            if(j>n&&Reach[i]!=1)
            {
                for(k=1;k<=n;k++)
                adj[i][k]=0;
                Reach[i]=1;
                order[m++]=i;
            }
        }
    }
}
int main()
{
    int i,j;
    printf("\nEnter how many vertices: ");
    scanf("%d",&n);
    printf("\nEnter 1 if Edge exist else Enter 0:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            printf("\nadj[%d][%d]:",i,j);
            scanf("%d",&adj[i][j]);
        }
    TopologicalSort();
    for(i=1;i<=n;i++)
    if(Reach[i]!=1) 
	break;
    if(i>n)
    {
        printf("\nTopological Order is:\t");
        for(i=1;i<m;i++)
        printf("\t%d",order[i]);
    }
    else
        printf("\nTopological Order does not exist........");
}

