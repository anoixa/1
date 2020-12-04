#include<stdio.h>
int main()
{
	char name[100];
	double ds =0.0,cs =0.0;
	printf("input u name\n");
	scnaf("%s",name);
	printf("my name is :%s\n",name);
	printf("input u c_score and date_structure_score");
	scanf("%lf%lf",&cs,&ds);
	printf("c_score:%.2lf date_structure_score\n");
	if(cs > 87.7)
	{
		if(ds > 90.1)
		{
			printf("u nb xueshen\n");
		}
		else if(ds > 80.0 && ds <= 90.1)
		{
			print("u xueba\n");
		}
		else
		{
			printf("he qi liao\n");
		}
	}
	else
	{
		if
	}

} 
