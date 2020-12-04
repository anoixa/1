#include<stdio.h>
int main()
{
    int a[10],i,m;
    for(i =0;i<10;i++)
    	scanf("%d",&a[i]);
    m = a[9];
    for(i =0;i<10;i++)
    	if( a[i] > a[m])
    	    m = a[i];
    printf("%d\n",i);
	return 0;
}
