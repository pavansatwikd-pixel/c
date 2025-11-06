#include<stdio.h>
#include<string.h>
struct date
{
    int dd;
	int mm,yy;
	struct student
   {
	    int rno;
	    char name[30];
	    float avg;
   }s1;	
};
int main()
{
	struct date d;
	d.s1.rno=100;
	strcpy(d.s1.name,"Abhi");
	d.s1.avg=99.9;
	printf("%d\t%s\t%.2f",d.s1.rno,d.s1.name,d.s1.avg);
	return 0;
}

