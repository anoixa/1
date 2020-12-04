#include<stdio.h>
int main()
{
	int n;
	int a[10];
	int i,j=0;
	for(i=0;i<10;i++)
	{
	    scanf("%d",&n);
	    a[i]=n;
	}
	for(i=9;i>=0;i--)
	{
		a[j++]=a[i];
	}
	for(i=1;i<j;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
