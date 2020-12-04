#include<stdio.h>
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("no\n");
			break;
		}
	}
	if(i>=n)
	{
		printf("Yes\n");
	}
}
