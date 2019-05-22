#include<stdio.h>
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low+1,j=high,temp;
    while(i<=j)
    {
        while(pivot>a[i]&&i<=high)
            i++;
        while(pivot<a[j]&&j>=low)
            j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        {
            temp=a[low];
            a[low]=a[j];
            a[j]=temp;
            return j;
        }
    }
}
void quicksort(int a[],int low,int high)
{
    int s;
    if(low<high)
    {
        s=partition(a,low,high);
        quicksort(a,low,s-1);
        quicksort(a,s+1,high);
    }
}
main()
{
    int a[30],n,i;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter element\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

