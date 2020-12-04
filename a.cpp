#include<stdio.h>
int main()
{
	int n,days,month,year;
	scanf("%d",&n);
	year = n / 360;
	month = n % 360 / 30;
	days = n %360%30;
	printf("%dÄê%dÔÂ%dÌì\n",year,month,days);
	return 0;
}
