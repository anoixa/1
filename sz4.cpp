#include<stdio.h>
int main()
{
	int a[10];
	int i,b=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2 == 1);
		{
			b++;
		}
	}
	printf("%d\n",b);
	return 0;
}
