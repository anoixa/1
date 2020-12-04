#include<stdio.h>
int main()
{
    int a,i = 0,o = 0;
    while( 1 )
    {
    	scanf("%d",&a);
        if(a == 0)
            break;
        if(a>0)
    	{
    		i = i + 1;
		}
    	else
    	{
    		o = o + 1;
		}
	}
    printf("%d\n%d\n",i,o);
	return 0;
}
