#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

// Global pointers
struct node *head = NULL;
struct node *end = NULL;
int count = 0,i;

// Function prototypes
void create();
void display();
void insertFirst();
void insertLast();
void insert();
void deleteNode();
void search();

int main() {
    int ch;
    while (1) {
        printf("\n1. Create\n2. Display\n3. Insert First\n4. Insert Last\n5. Insert\n6. Search\n7. Delete Node\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertFirst(); break;
            case 4: insertLast(); break;
			case 5: insert(); break;
            case 6: search();break;
    		case 7: deleteNode(); break;
            case 8: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function to create a new node at the end
void create() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    
    newnode->next = NULL;

    if (head == NULL) {
        head = end = newnode;
    } else {
        end->next = newnode;
        end = newnode;
    }
    count++;
}

// Function to display the linked list
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertFirst() {
	int info;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("\n Enter data into node ");
    scanf("%d",&info);
    newnode->data =info;
	newnode->next = head;
    head = newnode;
    count++;
    printf("\n Node is added");
}

void insertLast() {
	int info;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("\n Enter element ");
    scanf("%d",&info);
    newnode->data = info;
	newnode->next = NULL;
	end->next=newnode;
    end = newnode;
    count++;
}

// Function to insert a node at a given position
void insert() {
	int i,info,pos;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
	printf("\n Enter element ");
    scanf("%d",&info);
    printf("\nEnter position ");
    scanf("%d",&pos);
    newnode->data = info;
    newnode->next = NULL;
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }
        struct node* temp = head;
        for (i = 1; i < pos - 1; i++)
		 {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    count++;
}


// Function to search for an element in the linked list
void search() {
    int  found = 0,key;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("\n Enter element ");
    scanf("%d",&key);
    struct node* temp = head;
    int i = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Value %d found at position %d\n", key, i);
            found = 1;
            break;
        }
        temp = temp->next;
        i++;
    }
    if (!found) {
        printf("Value %d not found in the list!\n", key);
    }
}

// Function to replace a node's data with a new value
void replace() {
    int key, new_value, found = 0;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Enter value to replace: ");
    scanf("%d", &key);
    printf("Enter new value: ");
    scanf("%d", &new_value);

    struct node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            temp->data = new_value;
            printf("Replaced %d with %d\n", key, new_value);
            found = 1;
        }
        temp = temp->next;
    }

    if (!found) {
        printf("Value %d not found in the list!\n", key);
    }
}

// Function to delete a node at a given position
void deleteNode() {
    int pos;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Enter position to delete (1-%d): ", count);
    scanf("%d", &pos);

    if (pos < 1 || pos > count) {
        printf("Invalid position!\n");
        return;
    }

    struct node* temp = head;
    if (pos == 1) {
        head = head->next;
        free(temp);
    } else {
        struct node* prev = NULL;
        for (i = 1; i < pos; i++) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        if (pos == count) {
            end = prev;
        }
        free(temp);
    }
    count--;
}
