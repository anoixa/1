#include<stdio.h>
int main()
{
    int n;
    int i,s;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
        	s += i;
		}
	}
	if(s==n)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}

