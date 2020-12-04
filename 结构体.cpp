#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
typedef struct {
   int class_id;
   char class_name[20];
   char class_major[20];
   int  class_people;
}CLASS;
void inputInfo(CLASS *p, int n); 

void fun( )
{ 
    CLASS classinfo[10];
    int n;
    scanf("%d",&n);
    inputInfo(classinfo,n);  
    int i;     
    for(i=0;i<n;i++)   //Êä³ö 
    {
    	printf("%d %s %s %d\n",classinfo[i].class_id, classinfo[i].class_name, classinfo[i].class_major,classinfo[i].class_people);
	}
    
}

void inputInfo(CLASS *p, int n) //ÊäÈë 
{
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d%s%s%d",&p[i].class_id,p[i].class_name,p[i].class_major,&p[i].class_people);
        }
}

int main () 
{        
    fun( );

    return 0;
}

