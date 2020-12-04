#include<stdio.h>
int main()
{
	int a[10];
	double avg;
	int i,b=0,sum=0;
	for(i =0;i<10;i++)
	{
		scanf("%d",&a[i]);
    }   
	for(i =0;i<10;i++)
	{
        sum += a[i];
    }
    avg=1.0*sum/10;
    printf("%lf\n",avg);
    for(i=0;i<10;i++)
    {
    	if(a[i]>avg)
    	{
    		printf("%d\n",a[i]);
		}
	}
	return 0;
}
