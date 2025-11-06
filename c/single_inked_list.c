#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*end=NULL;
void create();
void display();
void insertfirst();
void insertlast();
int count=0;
void create()
{
	int info;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory is full...");
		return;
	}
	printf("Enter data:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=end=newnode;
	}
	else
	{
		end->next=newnode;
		end=newnode;
	}
	count++;
	printf("\n Node added");
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
	    printf("List is empty");
	    return ;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data);
		temp=temp->next;
	}	
}
void insertfirst()
{
	int info;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory is full...");
		return;
	}
	printf("Enter data:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=head;
	head=newnode;
	count++;
}
void insertlast()
{
	int info;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory is full...");
		return;
	}
	printf("Enter data:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=NULL;
	end->next=newnode;
	end=newnode;
	count++;
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n******MENU*****\n");
		printf("1.create \n2.display \n3.Insertfirst \n4.Insertlast \n5.Total \n9.Exit \n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:insertfirst();break;
			case 4:insertlast();break;
			case 5:printf("Total nodes=%d",count);break;
			case 9:exit(0);
			default:printf("\n Invalid choice... ");
	   }
	}
	return 0;
}
