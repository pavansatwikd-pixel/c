#include<stdio.h>
struct student
{
	int rno;
	char name[19];
	float avg;
};
int main()
{
	struct student s1;
	printf("%d",sizeof(s1));
	return 0;
}
