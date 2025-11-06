#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,k,l,s,x,y;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		    scanf("%d",&a[i][j]);
	    }
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			s=0;
			s=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+
			a[i+1][j+1];
			int avg=s/8;
			a[i][j]=avg;
			
		}
	}
	printf("\n");
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			printf("% 2d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
