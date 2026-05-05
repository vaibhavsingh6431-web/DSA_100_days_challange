/*prg - 3(a) : Create stack using array and perform operation - push ,pop , traversal , peek
  3(b) : create stack using  linked list and perform  operation - push , pop , traversal , peek 
  ( menu driven )
*/
#include<stdio.h>
#define N 100 
int stack[N];
int TOP = -1;
void push() {
    int x;
    if(TOP==N-1){
        printf("Stack overflow\n");
    } else {
        printf("enter value: ");
        scanf("%d",&x);
        TOP++;
        stack[TOP]=x;
    }
}
void pop() {
    if(TOP==-1){
        printf("stack underflow\n");
    } else {
        printf("Deleted element=%d\n",stack[TOP]);
        TOP--;
    }
}
void peek() {
    if(TOP == -1){
        printf("stack is empty\n");
    } else {
        printf("TOP element=%d\n",stack[TOP]);
    }
}
void traverse() {
    if(TOP==-1){
        printf("stack is empty\n");
    } else{
        printf("stack elements:\n");
        for(int i=TOP;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice ;
    while(1){
        printf("choose an option: \n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.peek\n");
        printf("4.Traverse\n");
        printf("5.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: traverse();
                    break;
            case 5: return 0;
            default : printf("Invalid choice\n");
        }
    }
}