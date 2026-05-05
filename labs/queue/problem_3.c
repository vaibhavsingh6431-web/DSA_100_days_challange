#include <stdio.h>
#include <string.h>
#define SIZE 100
char queue[SIZE];
int front = -1, rear = -1;
// Enqueue operation
void enqueue(char ch) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;

    queue[++rear] = ch;
}
// Dequeue operation
char dequeue() {
    if (front == -1 || front > rear) {
        return '\0';
    }
    return queue[front++];
}
int isPalindrome(char str[]) {
    int len = strlen(str);

    // Insert into queue
    for (int i = 0; i < len; i++) {
        enqueue(str[i]);
    }

    // Compare array and queue
    for (int i = len - 1; i >= 0; i--) {
        char ch = dequeue();
        if (str[i] != ch) {
            return 0; 
        }
    }
return 1; 
}
int main() {
    char str[SIZE];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}