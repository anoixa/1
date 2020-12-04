#include<stdio.h>
int main()
{
	int n,t,minv=9999,mini=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&t);
		if(t<minv)
		{
		    minv = t;
		    mini = i;
		}
	}
	printf("%d\n",minv);
	printf("%d\n",mini);
	return 0;
}
