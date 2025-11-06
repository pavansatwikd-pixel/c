#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top,cap;
	int *arr;	
};
struct stack * create_stack();
void push(struct stack* );
void pop(struct stack* );
void isfull(struct stack*);
void isempty(struct stack*);
struct stack * create_stack()
{
	struct stack* newstack=(struct stack *)malloc(sizeof(struct stack));
	int cap;
	printf("\nEnter capacity:");
	scanf("%d",&cap);
	newstack->cap=cap;
	newstack->top=-1;
	newstack->arr=(int *)malloc(cap * sizeof(int));
	return newstack;
}
void push(struct stack* newstack)
{
	int ele;
	if(newstack->top>=newstack->cap-1)
	{
		printf("\nStack Overflow!!!....");
		return;
	}
	else
	{
		newstack->top++;
		printf("\nEnter element:");
		scanf("%d",&ele);
		newstack->arr[newstack->top]=ele;
	}
	printf("\n Element PUSHED....");
}
void pop(struct stack* newstack )
{
	if(newstack->top < 0)
	{
		printf("\nStack Underflow!!!....");
		return;
	}
	else
	{
		printf("%d",newstack->arr[newstack->top--]);
	}
	printf("\n Element POPED....");
}
void isfull(struct stack* newstack)
{
	if(newstack->top>=newstack->cap-1)
	printf("\nStack is full!!!....");
	else
	printf("Stack is not full");
}
void isempty(struct stack* newstack)
{
	if(newstack->top < 0)
	printf("\nStack is Empty!!!....");
	else
	printf("Stack is not Empty");
}
int main()
{
	struct stack* s;
	int ch;
	while(1)
	{
		printf("\n***INDEX*\n");
		printf("1.Create stack\n2.push\n3.pop\n");
		printf("4.isfull\n5.isempty\n6.Exit\n");
		printf("Enter Your Choice:");
	    scanf("%d",&ch);
    	switch(ch)
    	{
		  case 1:s=create_stack();break;
		  case 2:push(s);break;
		  case 3:pop(s);break;
	      case 4:isfull(s);break;
		  case 5:isempty(s);break;
	      case 6:exit(0);
		  default:printf("\n--Invalid choice--");
    	}
    }
    return 0;
}
