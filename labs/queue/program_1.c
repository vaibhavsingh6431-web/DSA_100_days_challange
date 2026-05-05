#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// ---------------- Enqueue ----------------
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow!\n");
    } 
    else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
        printf("%d inserted into queue\n", value);
    }
}

// ---------------- Dequeue ----------------
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } 
    else {
        printf("%d deleted from queue\n", queue[front]);
        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }
}

// ---------------- Display ----------------
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// ---------------- Peek ----------------
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Front element: %d\n", queue[front]);
    }
}

// ---------------- Main ----------------
int main() {
    int choice, value;

    while (1) {
        printf("\n--- Queue Operations ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}