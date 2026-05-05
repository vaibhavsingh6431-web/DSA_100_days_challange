// create stack using linked list and perofm opeation - push pop , transverse , peek
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*TOP=NULL;
void push(){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter value: ");
    scanf("%d",&newNode->data);
    newNode->next=TOP;
    TOP=newNode;
}
void pop() {
    if(TOP ==NULL){
        printf("stack Underflow\n");
    } else {
        struct Node*temp=TOP;
        printf("deleted element=%d\n",TOP->data);
        TOP=TOP->next;
        free(temp);
    }
}
void peek() {
    if(TOP==NULL){
        printf("stack is empty\n");
    } else {
        printf("Top element=%d\n",TOP->data);
    }
}
void traverse() {
    struct Node*temp=TOP;
    if(TOP==NULL){
        printf("stack is empty\n");
    } else {
        printf("stack elements:\n");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
int choice;
while(1){
    printf("choose the option:\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.traverse\n");
    printf("5.Exit\n");
    printf("enter choice: ");
    scanf("%d",&choice);
    switch(choice){
         case 1: push();
                    break;

            case 2: pop();
                    break;

            case 3: peek();
                    break;

            case 4: traverse();
                    break;

            case 5: return 0;

            default: printf("Invalid choice\n");
    }
}
}