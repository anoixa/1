#include<stdio.h>
int swap(int a,int b)
{
	int t;
	t = a; a = b ; b = t;
	printf("%d %d\n",a,b);
	return 0;
}
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("%d\n",res);
}
