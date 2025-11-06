#include<stdio.h>
void radix_sort(int [],int);
void radix_sort(int a[],int n)
{
	int bucket[10][n],max,div=1,i,j,k,steps,count[10],dig=0,pos;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	while(max>0)
	{
		dig++;
		max=max/10;
	}
	for(steps=1;steps<=dig;steps++)
	{
		for(i=0;i<10;i++)
	    {
		    count[i]=0;
	    }
	    for(i=0;i<n;i++)
	    {
		    pos=(a[i]/div)%10;
		    bucket[pos][count[pos]]=a[i];
		    count[pos]++;
	    }
	    k=0;
	    for(i=0;i<10;i++)
	    {
	    	for(j=0;j<count[i];j++)
	    	{
	    		a[k]=bucket[i][j];
	    		k++;
			}
		}
		div=div*10;
	}
	
}
int main()
{
	int arr[25],n,i;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	radix_sort(arr,n);
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
