#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int i,j,m,n,t;
	printf("Enter the rows of matrix A:");
	scanf("%d",&m);
	printf("Enter the columns of matrix A:");
	scanf("%d",&n);
	printf("Enter the %d elements of matrix A:\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t=a[j][i];
			b[j][i]=a[i][j];
			b[i][j]=t;
		}
	}
	printf("The resultant matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%3d",b[i][j]);
	    }
	    printf("\n");
	}
   
	return 0;
}
