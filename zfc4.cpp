#include<stdio.h>
int main()
{
	char s[100],ch;
	gets(s);
	ch=getchar();
	for(int i=0;s[i]!='\0';i++)
	{
        if(s[i]==ch)
        {
        	s[i]=s[i]-32;
		}
	}
	printf("%s\n",s);
}
