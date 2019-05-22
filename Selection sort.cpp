#include <stdio.h>
int n,a[20];
void selection()
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main()
{
    int i;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("enter array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection();
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
