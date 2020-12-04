#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i;
	int g,s,b;
	scanf("%d",&n);
	for(i=100;i<=n;i++)
	{
		g = (i/1)%10;
		s = (i/10)%10;
		b = (i/100)%10;
	    if(i==(pow(g,3)+pow(s,3)+pow(b,3)))
	    {
	    	printf("%d\n",i);
		}
    }  
}
