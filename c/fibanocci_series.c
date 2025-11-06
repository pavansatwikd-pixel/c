#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int k;
	scanf("%d",&k);
	printf("%d %d",a,b);
	c=a+b;
	while(c<k)
	{
		printf(" %d",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
