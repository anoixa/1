#include<stdio.h>
int main()
{
	char s[100],ch;
	int i=0,j=0;
	gets(s);
	ch=getchar();
	for(i=0;s[i]!='\0';i++)
	{
        if(s[i]!=ch)
        {
        	s[j++]=s[i];
		}
	}
	s[j]='\n';
	puts(s);
}
