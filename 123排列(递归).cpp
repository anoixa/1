#include<stdio.h>
int a[3];
int dfs(int n)
{
	if (n==3)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",a[j]);
		}
		printf("\n");
		return 0;
    }
	for(int i = 1;i<4;i++)
	{
		a[n] = i;
		dfs(n+1);
		a[n] = 0;
	}
	return 0;
}
int main()
{
	int n = 0;
	dfs(n);
	return 0;
}
