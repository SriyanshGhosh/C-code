#include<stdio.h> 
main() 
{ 
    int visited[23],mindist[10],cost[10][10],dist[10],min=0; 
    int n,sv,j,i,k,w,v; 
    printf("\nEnter the no of vertices"); 
    scanf("%d",&n); 
    printf("Enter the cost of matrix:\n"); 
    for(i=1;i<=n;i++)                    
    for(j=1;j<=n;j++) 
    { 
        scanf("%d",&cost[i][j]); 
        if(cost[i][j]==0) 
        cost[i][j]=999;                    
    } 
    printf("enter the source\n"); 
    scanf("%d",&sv); 
    for(i=1;i<=n;i++) 
    { 
        visited[i]=0; 
        dist[i]=cost[sv][i]; 
    } 
    visited[sv]=1; 
    dist[sv]=1; 
    for(k=2;k<=n;k++) 
       { 
            min=999;
            for(w=1;w<=n;w++)
            if(dist[w]<min && visited[w]==0) 
            { 
                min=dist[w]; 
                v=w; 
            }                
            visited[v]=1; 
            for(w=1;w<=n;w++)
            if(dist[v]+cost[v][w]<dist[w])
            dist[w]=cost[v][w]+dist[v]; 
        }   
	    printf("shortest path\n"); 
        for(j=1;j<=n;j++) 
        { 
            if(j!=sv) 
            printf("%d->%d==%d\n",sv,j,dist[j]);       
        } 
} 
