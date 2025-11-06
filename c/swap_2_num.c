#include<stdio.h>
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("After swap:");
	printf("\na=%d\nb=%d",a,b);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
