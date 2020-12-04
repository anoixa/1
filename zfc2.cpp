#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,count;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("%d\n",count);
} 
