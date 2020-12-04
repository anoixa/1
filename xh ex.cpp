#include<stdio.h>
int main()
{
	int a,i=1,t,s;
	scanf("%d",&a);
    for(int i=0;a;i++)
    {
    	t = a%10;
    	a = a/10;
    	s = s+t;
	}
	printf("%d",s);
	return 0;
}
