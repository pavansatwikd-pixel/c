#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push(int ele)
{
	if(top==size-1)
	{
		printf("STACK is overflow\n");
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}
int pop()
{
	int x;
	if(top==-1)
	{
		printf("STACK is underflow\n");
		return -1;
	}
	x=stack[top];
	top--;
	return x;
}
int peek()
{
	if(top==-1)
	{
		printf("STACK is underflow\n");
		return -1;
	}
	return stack[top];
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("STACK is underflow\n");
	}
	else
	{
		printf("STACK elements are:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n***INDEX***\n");
		printf("1.PUSH\n2.POP\n3.PEEK\n");
		printf("4.DISPLAY\n5.Exit\n");
		printf("Enter Your Choice:");
	            scanf("%d",&ch);
    	switch(ch)
    	{
		  case 1:
		  	printf("\nEnter element:");
		  	scanf("%d",&x);
		  	push(x);
		  	break;
		  case 2:
		  	x=pop();
		  	if(x!=-1)
		  	  printf("Popped element is %d\n",x);
		  	break;  
		  case 3:
		  	x=peek();
		  	if(x!=-1)
		  	  printf("Top most element is %d\n",x);
		  	break;
	      case 4:
	      	display();
	      	break;
		  case 5:
		  	exit(0);
		  default:printf("\n--Invalid choice--");
    	}

	}
	return 0;
}
