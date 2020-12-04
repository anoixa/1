#include<stdio.h>
#define N 10
int main()
{
	int a[N];
	int i,j,maxid=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>maxid)
		{
			a[maxid]=a[i];
		}
		printf("%d",a[maxid]);
	}
}
