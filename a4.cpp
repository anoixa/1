#include<stdio.h>
int main()
{
	int a,q,w,e,r,t;
	scanf("%d",&a);
    q = a/10000 % 10;
    w = a/1000 % 10;
    e = a/100 % 10;
    r = a/10 % 10;
    t = a/1 % 10;
    if ( q==t || w==r)
    printf("Ϊ�Գ���\n");
    else
	printf("Ϊ�Գ���\n");
	return 0;
}
