#include<stdio.h>
int main()
{
	int a,b,i=0;
	scanf("%d",&a);
	while( a!=0 )
	{
		a = a/10;
		i++;
	}
	printf("%d",i);
	return 0;
}
