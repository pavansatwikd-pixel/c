#include<stdio.h>
int main()
{
	int a[50],n,i,p,t,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(t=i+1;t<n;t++)
		{
			if(a[i]==a[t])
			{
				p=t;
				n=n-1;
	            for(j=p;j<n;j++)
	            {
		            a[j]=a[j+1];
	            }
			}
		}
	}
	printf("\n The new array after the deletion of the duplicate elments is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
