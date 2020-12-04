#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c || a+c>b || b+c>a)
	{
		if( a==b && b==c && c==a )
		printf("等边\n");
		else if( a==b || a==c || b==c )
		printf("等腰\n");
		else
		printf("一般等\n");
	}
	else
	printf("不能构成三角形\n");
	return 0;
}
