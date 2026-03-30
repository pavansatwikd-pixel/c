#include <stdio.h>

#define MAX 50

int heap[MAX];
int size = 0;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapifyUp(int i) {
    while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void heapifyDown(int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        heapifyDown(largest);
    }
}

void insert(int value) {
    heap[size] = value;
    heapifyUp(size);
    size++;
}

void delete() {
    if (size == 0) {
        printf("Heap is empty\n");
        return;
    }
    printf("Deleted: %d\n", heap[0]);
    heap[0] = heap[--size];
    heapifyDown(0);
}

void display() {
    int i;  

    for (i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    do {
        printf("\n--- Max Heap ---\n");
        printf("1.Insert\n2.Delete\n3.Display\n0.Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 0);

    return 0;
}
