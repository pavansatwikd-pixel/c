#include<stdio.h>
int main()
{
    
    int a[40];
    int temp;
    int i, j,n,min;  
    
     printf("Enter rows: ");
     scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++)
    {
    	min=i;
        for(j=i+1; j<n; j++)
		{ if(a[j]<a[min])
            min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
     printf("\nAfter Sorting ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
