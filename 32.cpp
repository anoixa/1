#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,S,P;
	printf("���������߳�\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if( a+b<=c || b+c<=a || a+c<=b) 
	{
		printf("���ܹ���������\n");
	}
	else
	{
		P = (a+b+c)/2;
	    S = sqrt(P*(P-a)*(P-b)*(P-c));
	    printf("���Ϊ%.2lf\n",S);
	}
	return 0;
} 
