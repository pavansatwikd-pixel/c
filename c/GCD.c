#include<stdio.h>
int gcd(int,int);
int gcd(int x,int y)
{
	int z,i,res;
	z=(x<=y?x:y);
	while(z>0)
	{
		if(x%z==0 && y%z==0)
		{
		    res=z;
			break;	
		}
		z--;
	}
	return z;
}
int main()
{
	int a,b,r;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	r=gcd(a,b);
	printf("The GCD of %d and %d is: %d",a,b,r);
	return 0;
}
