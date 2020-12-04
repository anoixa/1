#include<stdio.h>
int main()
{
	int a[10];
	int sum=0;
	int i,b=0;
	for(i =0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }   
	for(i =0;i<10;i++)
	{
        if(a[i]%2 == 0)
        {
    	    sum += a[i];
    	    b++;
    	}
    }
	printf("%lf\n",1.0*sum/b);
	return 0;
}
