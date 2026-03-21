/*Problem: Implement push and pop operations on a stack and verify stack operations.

Input:
- First line: integer n
- Second line: n integers to push
- Third line: integer m (number of pops)

Output:
- Print remaining stack elements from top to bottom

Example:
Input:
5
10 20 30 40 50
2

Output:
30 20 10*/
#include<stdio.h>
#define size 100
int stack[size];
int top=-1;
void push(int element){
    if(top==size-1){
        printf("stack is overflow");
    } else{
        stack[++top]=element;
    }
}
void pop(){
    int element;
    if(top==-1){
        printf("stack is undrflow");
    } else{
        top--;
    }
}
int main(){
    int n,m,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        push(x);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
       pop();
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    return 0;

    
}