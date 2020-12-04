#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	for(i=0;N>1;i++)
	{
		if( N%2 == 0)
		{
     		N = N/2;
    		printf("%d",N);
        }
		else
		{ 
	       	N = N*3+1;
	    	printf("%d",N);
    	}
	}
	return 0;
}
