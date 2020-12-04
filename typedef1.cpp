#include<stdio.h>
struct Time
{
	int hour, minute, second;
};
int main()
{
	struct Time t1;
	struct Time t2 = { 1,2,3 };
	struct Time t3 = { 4 };
	struct Time t4 = { .minute = 5 };
	printf("cs\n");
	printf("t2=%d:%d:%d\n", t1.hour, t1.minute, t1.second);
	printf("t2=%d:%d:%d\n", t2.hour, t2.minute, t2.second);
	printf("t2=%d:%d:%d\n", t3.hour, t3.minute, t3.second);
	printf("t2=%d:%d:%d\n", t4.hour, t4.minute, t4.second);
}

