#include<stdio.h>
long int fact(int);
long int fact(int x)
{
	int i;
	long int p=1;
	for(i=1;i<=x;i++)
	{
		p=p*i;
	}
	return p;
}
int main()
{
	int n,r;
	long int nfact,rfact,nrfact,ncr;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("Enter the r value:");
	scanf("%d",&r);
	nfact=fact(n);
	nrfact=fact(n-r);
	rfact=fact(r);
	ncr=nfact/(nrfact*rfact);
	printf("ncr is : %ld",ncr);
	return 0;
}
