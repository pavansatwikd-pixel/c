#include<stdio.h>
void prime(int);
void prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("Prime number");
	else
	printf("Not a prime number");
}
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	prime(n);
	return 0;
}
