#include<stdio.h>
void quick_sort(int[],int,int);
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quick_sort(int a[],int left,int right)
{
	if(left<right)
	{
		int pivot=a[left];
		int i=left;
		int j=right;
		while(i<j)
		{
			while(a[i]<=pivot)
			{
			
			    i++;
			}
			while(a[j]>pivot)
			{
			
			    j--;
		    }
			if(i<j)
		    {
			   swap(&a[i],&a[j]);
		    }
	    }
	    swap(&a[left],&a[j]);
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
		printf("%d ",arr[i]);
	}
	return 0;
}
