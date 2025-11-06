#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
	int r;
	if(a==0)
	return b;
	else
	{
		while(b!=0)
		{
			r=a%b;
			a=b;
			b=r;
		}
	}
	return a;
}
int main()
{
	int a,b,g,l;
	scanf("%d%d",&a,&b);
	if(a>b)
	g=gcd(a,b);
	else
	g=gcd(b,a);
	l=(a*b)/g;
	printf("%d",l);
	
}
