#include<stdio.h>
void quick_sort(int[],int,int);
void quick_sort(int a[],int left,int right)
{
	if(left<right)
	{
		int i,j,t;
		int pivot;
	    pivot=a[left];
		i=left;
		j=right;
		while(i<j)
		{
			while(a[i]<=pivot && i<=right)
			{
			
			    i++;
			}
			while(a[j]>pivot)
			{
			
			    j--;
		    }
			if(i<j)
		    {
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;
		    }
	    }
	    t=a[j];
	    a[j]=pivot;
	    a[left]=t;
	    quick_sort(a,left,j-1);
	    quick_sort(a,j+1,right); 
	}
}

int main()
{
	int arr[25],n,i;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("Enter the %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	return 0;
}
