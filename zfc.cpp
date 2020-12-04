#include<stdio.h>
int main()
{
	char s[100];
	int count = 0,j=0;
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]<='z' && s[i]>='a' || s[i]<='Z' && s[i]>='A')
		{
			count++;
		}
		else
		{
			j++;
		}
	}
	printf("%d%d\n",count,j);
}
