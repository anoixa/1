#include<stdio.h>
int main()
{
	char s[100];
    getchar ch;
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	{
        if((s[i]<='z' && s[i]>='a')||(s[i]<='Z' && s[i]>='A'))
        s[i]^=32
	}
	printf("%d\n",s);
}
