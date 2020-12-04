#include<stdio.h>
int main()
{
	int m,n;
	int b;
	int i;
	int a[10000];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(int j= 0;j<i;j++)
		{
			a[j]=i % 10;
			i /= 10;
			b += a[j];
		}
		if(b==9 && i%4==0)
		{
			printf("%d",i);
		}
	}
}
