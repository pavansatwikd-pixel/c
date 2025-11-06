#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
{
    if(b==0)   
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
	int a,b,r;
	scanf("%d",&a);
	scanf("%d",&b);
	
	r=gcd(a,b);
	printf("%d",r);
	return 0;
}
