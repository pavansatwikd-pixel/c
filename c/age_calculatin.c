#include<stdio.h>
struct date
{
	int dd,mm,yy;
};
int main()
{
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int dd,mm,yy;
	struct date d1,d2;
	scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
	scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yy);
	if(d1.dd>d2.dd)
	{
		d2.dd=d2.dd+month[d1.mm-1];
		d2.mm--;
	}
	if(d1.mm>d2.mm)
	{
		d2.mm=d2.mm+12;
		d2.yy--;
	}
	dd=d2.dd-d1.dd;
	mm=d2.mm-d1.mm;
	yy=d2.yy-d1.yy;
	printf("%d-%d-%d",yy,mm,dd);
	return 0;
}
