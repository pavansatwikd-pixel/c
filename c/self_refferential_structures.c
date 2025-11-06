#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
	struct student *a1;
};
int main()
{
	struct student s1,s2;
	s1.a1=&s2;
	s1.a1->rno=100;
	printf("%d",s1.a1->rno);
	return 0;
}
