#include<stdio.h>
int main()
{
	int a,s=0;
	scanf("%d",&a);
	while( a != 0)
	{
		s = s*10 + a%10;
		a = a/10;
	}
	printf("%d",s);
	return 0;
}
