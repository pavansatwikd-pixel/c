#include<stdio.h>
int add(int,int);
int add(int x,int y)
{
	int u;
	u=x+y;
}
int main()
{
	int x=3,y=4;
	int z=add(x,y);
	printf("%d",z);
	return 0;
}
