#include<stdio.h>
#include<mem.h>
#define M 8
int mian()
{
	int a[M];
	memset(a,-1,sizeof(a));
	for(int i = 0;i < M;i++)
	    printf("%d",a[i]);
	return 0;
}
