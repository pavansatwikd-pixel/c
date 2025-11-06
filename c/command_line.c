#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct student
{
	int s1,s2,s3,s4,tot;
	char name[30];
	float avg;
}std1;
int main(int n,char *str[])
{
	if(n>=6)
	{
		strcpy(std1.name,str[1]);
	    std1.s1=atoi(str[2]);
	    std1.s2=atoi(str[3]);
	    std1.s3=atoi(str[4]);
	    std1.s4=atoi(str[5]);
	    std1.tot=std1.s1+std1.s2+std1.s3+std1.s4;
	    printf("NAME\t MARKS\n\n");
	    printf("%s\t%d",std1.name,std1.tot);
	}
	else
	printf("Less arguments given!!!");
	return 0;
}
