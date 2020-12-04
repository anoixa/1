#include<stdio.h>
int main()
{
	int a[10],i,maxi,b,c=0,d;
	int n=0,f;
	scanf("%d",&b);
	while(b)
	{
		a[c]= b%10;
		c++;
		b/=10;
	}
	for(i=0;i<c-1;i++)
	{
		maxi++;
	}
	for(d=i+1;d<c;d++)
	{
		if(a[maxi]<a[d])
		{
			maxi = d;
		}
	}
	for(i=0;i<c;i++)
        n=n*10+a[i];
    printf("%d\n",n);
    return 0;
}
