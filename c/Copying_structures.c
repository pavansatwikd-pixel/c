#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
}s1,s2,s3;
int main()
{
	struct student s3={002,"Abhi",78.9};
	s2=s3;
	printf("ORIGINAL STRUCTURE IS:\n");
	printf("%d\t%s\t%.2f\n",s3.rno,s3.name,s3.avg);
	printf("COPIED STRUCTURE IS:\n");
	printf("%d\t%s\t%.2f\n",s2.rno,s2.name,s2.avg);
	return 0;
}
