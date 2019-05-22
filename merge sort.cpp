#include<stdio.h>
#include<string.h>
void merge(int a[],int low,int mid, int high)
{
	int i=low,j=mid+1,k=low,x,c[30];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			k++;i++;
		}
		else
		{
			c[k]=a[j];
			j++;k++;
		}
	}
		if(i>mid)
		{
			for(x=j;x<=high;x++)
			{
				c[k++]=a[x];
			}
		}
		else
		{
			for(x=i;x<=mid;x++)
			{
				c[k++]=a[x];
			}
		}
		for(i=low;i<=high;i++)
		a[i]=c[i];
	}

void mergesort(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}
main()
{
	int a[20],i,n;
	printf("Enter the size: \t");
	scanf("%d",&n);
	printf("Enter the array: \t" );
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Entered array: \t");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	mergesort(a,0,n-1);
	printf("Sorted array");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
}
