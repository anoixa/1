#include<stdio.h>
int main()
{
    int a,b=1;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
    	if(a % i == 0)
    	{
    		b = b + i;
		}
	}
	if ( b == a)
	    printf("yes\n");
	else
	    printf("No\n");
	return 0;
}
