#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i=0,search_element;
	int n;
	printf("\nEnter the size of array\n");
	scanf("%d",&n); 
	printf("\nEnter the Elements in the array\n"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("\nEnter the Element to be searched:\n");
	scanf("%d",&search_element);
	for(i=0;i<n;i++)
	{
		if(a[i]==search_element)
		{
			printf("\nElement %d found at position %d", a[i],i+1);
			exit(0);
		}
	}
	printf("\nElement %d is not present",search_element);
}
