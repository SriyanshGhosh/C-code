#include<stdio.h>
#include<math.h>
int n,set[10],d,binary[10];
void create(int x)
{
    int i;
    i=n-1;
    while(x)
    {
        binary[i]=x%2;
        x=x/2;
        i--;
    }
    while(i>=0)
    {
        binary[i]=0;
        i--;
    }
}
void findsubset()
{
    int i,j,sum=0;
    for(i=0;i<pow(2,n);i++)
    {
        create(i);
        sum=0;
        for(j=0;j<n;j++)
        {
            if(binary[j]==1)
                sum+=set[j];
        }
        if(sum==d)
        {
            printf("\n{ ");
            for(j=0;j<n;j++)
            {
                if(binary[j]==1)
                    printf("%d ",set[j]);
            }
            printf("}\n");
        }
    }
}
main()
{
    int i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&set[i]);
    printf("\nEnter Sum value: ");
    scanf("%d",&d);
    printf("\n\n");
    findsubset();
}

