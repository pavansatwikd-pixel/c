#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(n;n>0;n--)
	{
		for (j=1;j<=n;j++)
		{
			printf("* ",j);
		}
		printf("\n");
	}
	return 0;
}
