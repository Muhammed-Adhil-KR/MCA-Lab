#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   // You can change the size here

int queue[SIZE];
int front = -1, rear = -1, count = 0;

// Create/Initialize queue
void createQueue() {
    front = rear = -1;
    count = 0;
    printf("Circular queue created with size %d.\n", SIZE);
}

// Check if full
int isFull() {
    return (count == SIZE);
}

// Check if empty
int isEmpty() {
    return (count == 0);
}

// Insert (Enqueue)
void insert(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot insert %d.\n", value);
        return;
    }
    if (front == -1) front = 0;          // first insertion
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    count++;
    printf("%d inserted into queue.\n", value);
}

// Delete (Dequeue)
void delete() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot delete.\n");
        return;
    }
    printf("%d deleted from queue.\n", queue[front]);
    front = (front + 1) % SIZE;
    count--;
    if (count == 0) front = rear = -1;  // reset if queue is now empty
}

// Display elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    for (int c = 0; c < count; c++) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

// Count elements
void countElements() {
    printf("Total elements in queue = %d\n", count);
}

// Main menu
int main() {
    int choice, value;
    createQueue();

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Count Elements\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            countElements();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}