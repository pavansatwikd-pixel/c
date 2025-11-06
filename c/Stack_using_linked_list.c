#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
	struct stack *prev;	
};
struct stack *top=NULL;
int count=0,cap=5;
void push(int );
void display();
int pop();
int peek();
void push(int info)
{
	struct stack *newnode;
	newnode=(struct stack *)malloc(sizeof(struct stack));
	if(newnode==NULL)
	{
		printf("Memory is full...");
		return;
	}
	newnode->data=info;
	newnode->prev=NULL;
	if (top==NULL)
	{
		top=newnode;
	}
	else
	{
		newnode->prev=top;
		top=newnode;
	}
	printf("\n Element pushed into the stack...");
	count++;
}
void display()
{
	struct stack *temp;
	if(top==NULL)
	{
	    printf("\nStack Under Flow...");
	    return ;
	}
	temp=top;
	printf("\nStack Uelements are:\n");
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data);
		temp=temp->prev;
	}	
}
int pop()
{
	int x;
	if(top==NULL)
	{
	    printf("\nStack Under Flow...");
	    return -1;
	}
	struct stack *temp=top;
	x=top->data;
	top=top->prev;
	free(temp);
	count--;
	return x;
}
int peek()
{
	int x;
	if(top==NULL)
	{
	    printf("\nStack Under Flow...");
	    return -1;
	}
	return top->data;
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n***INDEX*\n");
		printf("1.push\n2.Display\n3.pop \n4.peek \n5. Exit\n");
		printf("Enter Your Choice:");
	    scanf("%d",&ch);
    	switch(ch)
    	{
		  case 1:
		  	    printf("Enter element:");
	            scanf("%d",&x);
	            push(x);
		        break;
		  case 2:display();break;
		  case 3:
		  	    x=pop();
		        if(x!=-1)
		        printf("%d element is popped",x);
				break;
	      case 4:
		        x=peek();
		        if(x!=-1)
		        printf("\n The top element is: %d",x);
				break;
	      case 5:exit(0);
		  default:printf("\n--Invalid choice--");
    	}
    }
    return 0;
}

