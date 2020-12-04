#include<stdio.h>
int main()
{
	char s[100];
	int dx=0,xx=0,sz=0,kg=0,qt=0;
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]<='z' && s[i]>='a')
		{
			xx++;
		}
		else if(s[i]<='Z' && s[i]>='A')
		{
			dx++;
		}
		else if(s[i]<='9'&&s[i]>='0')
		{
			sz++;
		}
		else if(s[i]==' ')
		{
			kg++;
		}
		else
		{
			qt++;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d\n",dx,xx,sz,kg,qt);
}
