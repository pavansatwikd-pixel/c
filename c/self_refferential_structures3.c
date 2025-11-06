#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char data[20];
	struct node* next;
};
int main()
{
	struct node *n1,*n2,*n3,*ptr;
	n1=(struct node *) malloc (sizeof(struct node));
	n2=(struct node *) malloc (sizeof(struct node));
	n3=(struct node *) malloc (sizeof(struct node));
	ptr=n1;
	scanf("%s",&n1->data);
	scanf("%s",&n2->data);
	scanf("%s",&n3->data);
	n1->next=n2;
	n2->next=n3;
	n3->next=NULL;
	while(ptr!=NULL)
	{
		printf("%s\n",ptr->data);
		ptr=ptr->next;
	}
	return 0;
}
