#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
typedef struct {
   int person_id;
   char person_name[20];
   char person_job[20];
   int  person_salary;
}PERSON;
void inputInfo(PERSON *p, int n); 

void fun( )
{ 
    PERSON personinfo[10];
    int n;
    scanf("%d",&n);
    inputInfo(personinfo,n);  
    int i;
    int maxid = 0;
    for(i=1; i<n; i++)
  	if( personinfo[i].person_salary > personinfo[maxid].person_salary )
  	{ 
  		maxid = i;
  	} 
    printf("%d %s %s %d\n",personinfo[maxid].person_id,personinfo[maxid].person_name,personinfo[maxid].person_job,personinfo[maxid].person_salary);

    
}

void inputInfo(PERSON *p, int n) // ‰»Î 
{
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d%s%s%d",&p[i].person_id,p[i].person_name,p[i].person_job,&p[i].person_salary);
        }
}

int main () 
{        
    fun( );

    return 0;
}
