#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char TEXT[100],PATTERN[20];
int n,m;
int StringMatch()
{
	int i,j;
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m && TEXT[i+j] == PATTERN[j])
			j++;
			if(j==m)
			return i;
	}
	return -1;
}
main()
{
	int pos;
	printf("Enter the string: \n");
	gets(TEXT);
	printf("Enter the pattern: \n");
	gets(PATTERN);
	n=strlen(TEXT);
	m=strlen(PATTERN);
	pos=StringMatch();
	if(pos==-1)
		printf("Pattern not found \n");
	else
		printf("Pattern found at: %d",pos);
}
