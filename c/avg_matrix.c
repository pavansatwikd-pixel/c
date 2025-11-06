#include<stdio.h>
int main()
{
	int a[10][10],n,i,j,k,l,s,x,y;
	int avg;
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
			for(x=i-1;x<=i+1;x++)
			{
				for(y=j-1;y<=j+1;y++)
				{
					if(a[x][y]!=a[i][j])
					s=s+a[x][y];
				}
			}
			avg=s/8;
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
