#include<stdio.h>
struct student
{
	int rno,s1,s2,s3,s4,tot;
	float avg;
};
int main()
{
	struct student std[100];
	int n,i;
	printf("Enter the number if students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the roll no and the 4 sub marks:\n");
		scanf("%d%d%d%d%d",&std[i].rno,&std[i].s1,&std[i].s2,&std[i].s3,&std[i].s4);
		std[i].tot=std[i].s1+std[i].s2+std[i].s3+std[i].s4;
		std[i].avg=std[i].tot/4.0;
	}
	printf("RollNo\tTotal\tAverage\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%.2f\n",std[i].rno,std[i].tot,std[i].avg);
	}
	return 0;
}
