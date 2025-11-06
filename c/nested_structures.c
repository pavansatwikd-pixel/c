#include<stdio.h>
struct date
{
    int dd;
	int mm,yy;	
};
struct student
{
	int rno;
	char name[30];
	float avg;
	struct date dob;
};
int main()
{
	struct student s1;
	s1.dob.dd=15;
	s1.dob.mm=5;
	s1.dob.yy=1979;
	printf("%d-%d-%d",s1.dob.dd,s1.dob.mm,s1.dob.yy);
	return 0;
}
