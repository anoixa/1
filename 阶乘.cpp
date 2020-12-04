#include<stdio.h>
int main()
{
	int n,a;
	int i,j=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n != 0)
		{
			j = j*i;
			a = j;
		}
		else
		{
			a = 1;break;
		}
	}
	printf("%d",a);
}
