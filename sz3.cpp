#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,a[6] = {0};
	srand((unsigned)time(NULL));
	for(i=0;i<60000;++i)
	    ++a[rand()%6];
    printf("%-8s%-8s%-8s%-8s%-8s%-8s\n","1","2","3","4","4","5","6");
    for(i=0;i<6;++i)
        printf("%-8d",a[i]);
    printf("\n");
    return 0;
}
