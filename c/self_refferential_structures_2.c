#include<stdio.h>
#include<string.h>
struct node
{
	char data[20];
	struct node* next;
};
int main()
{
	struct node n1,n2,n3,*ptr;
	ptr=&n1;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	strcpy(n1.data,"RRR");
	strcpy(n2.data,"DRAGON");
	strcpy(n3.data,"DEBBA DEBBA");
	while(ptr!=NULL)
	{
		printf("%s\n",ptr->data);
		ptr=ptr->next;
	}
	return 0;
}
