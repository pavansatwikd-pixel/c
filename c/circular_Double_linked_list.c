#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
struct node *head=NULL,*end=NULL;
void create_list();
void display();
void reverse();
void insert_node();
void search();
void delete_node();
struct node *create_node();
int count=0;
struct node *create_node()
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
	newnode->prev=newnode->next=NULL;
	return newnode;
}
void create_list()
{
	struct node *newnode=create_node();
	if (head==NULL)
	{
		head=end=newnode;
		head->prev=end;
		end->next=head;
	}
	else
	{
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
		end->next=head;
		head->prev=end;
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
	do
	{
		printf("%d -> ",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
void insert_node()
{
	int info,pos,i;
	struct node *temp;
	printf("\nEnter Position:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1)
	{
		printf("\n*Insertion Not Possible*");
		return;
	}
	struct node *newnode=create_node();
	if(pos==1)
	{
		if(head==NULL)
		{
		    head=end=newnode;
		    head->prev=end;
		    end->next=head;
			count++;
		    return;
		}
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
		end->next=head;
		head->prev=end;
		count++;
	}
	else if(pos==count+1)
	{
		if(head==NULL)
		{
		    head=end=newnode;
		    head->prev=end;
		    end->next=head;
			count++;
		    return;
		}
		end->next=newnode;
		newnode->prev=end;
		end=newnode;
		end->next=head;
		head->prev=end;
		count++;
	}
	else
	{
	    temp=head;
	    for(i=1;i<pos-1;i++)
	    {
		    temp=temp->next;
	    }
	    newnode->next=temp->next;
	    newnode->prev=temp;
	    temp->next->prev=newnode;
	    temp->next=newnode;
	    count++;
	}
	printf("---Node is Inserted---\n");

}
void delete_node()
{
	int pos,i;
	struct node *temp;
	printf("\nEnter Position:");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("\n*Deletion Not Possible*");
		return;
	}
	if(pos==1)
	{
		if(head==NULL)
	    {
	        printf("List is empty");
	        return ;
	    }
		temp=head;
		head=head->next;
		if(head==temp)
		end=NULL;
		else
		{
			head->prev=end;
			end->next=head;
		}
		free(temp);
		count--;
	}
	else if(pos==count)
	{
		if(head==NULL)
	    {
	        printf("List is empty");
	        return ;
	    }
	    temp=end;
		end=end->prev;
		if(end==temp)
		head=NULL;
		else
		{
		    end->next=head;
		    head->prev=end;
		}
		free(temp);
		count--;
	}
	else
	{
	    temp=head;
	    for(i=1;i<pos;i++)
	    {
		    temp=temp->next;
	    }
	    temp->prev->next=temp->next;
	    temp->next->prev=temp->prev;
	    free(temp);
	    count--;
	}
	printf("---Node is Deleted---\n");
}
void search()
{
	int key;
	if(head==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	printf("\nEnter element to search:");
	scanf("%d",&key);
	struct node *temp=head;
	do
	{
		if(temp->data==key)
	    {
	    	printf("\nElement Found");
	    	return ;
		}
		temp=temp->next;
	}while(temp!=head);
	printf("\nElement not found");
}
void replace()
{
	int key,ele;
	if(head==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	printf("\nEnter element to search:");
	scanf("%d",&key);
	printf("\nEnter data to replace:");
	scanf("%d",&ele);
	struct node *temp=head;
	do
	{
		if(temp->data==key)
	    {
	    	temp->data=ele;
	    	printf("\nElement replaced");
	    	return ;
		}
		temp=temp->next;
	}while(temp!=head);
	printf("\n could not find the search Element ");
}
void reverse()
{
	if(head==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	struct node *temp=end;
	printf("\n The reversed List is :\n");
	do
	{
	    printf("%d -> ",temp->data);
		temp=temp->prev;	
	}while(temp!=end);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n***INDEX*\n");
		printf("1.Create\n2.Display\n3.Insert node \n");
		printf("4.Delete Node\n5.search\n6.replace\n7.Reverse\n8.Exit\n");
		printf("Enter Your Choice:");
	    scanf("%d",&ch);
    	switch(ch)
    	{
		  case 1:create_list();break;
		  case 2:display();break;
		  case 3:insert_node();break;
	      case 4:delete_node();break;
		  case 5:search();break;
	      case 6:replace();break;
	      case 7:reverse();break;
	      case 8:exit(0);
		  default:printf("\n--Invalid choice--");
    	}
    }
    return 0;
}
