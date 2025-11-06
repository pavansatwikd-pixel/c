#include<stdio.h>
void quick_sort(int a[],int left,int right)
{  
	if(left<right)
	{
		int pivot=left,t;
		int i=left,j=right;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<=right){
			i++;}
			while(a[j]>a[pivot]){
			j--;}
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[pivot];
		a[pivot]=t;
		quick_sort(a,left,j-1);
		quick_sort(a,j+1,right);
	}
}
	int main()
	{
		int a[25],n,i;
		printf("enter n value:");
		scanf("%d",&n);
		printf("enter %d values:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		quick_sort(a,0,n-1);
		printf("sorted array elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d  ",a[i]);
		}
	}
