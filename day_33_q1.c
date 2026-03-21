/*Problem: Convert an infix expression to postfix notation using stack.

Input:
- Single line: infix expression (operands are single characters)

Output:
- Print the postfix expression

Example:
Input:
A+B*C

Output:
ABC*+

Explanation:
Operator precedence: * > +
Use stack to handle operator precedence and associativity*/
#include<stdio.h>
#include<ctype.h>
#define size 100
char stack[size];
int top=-1;
void push(char x){
    stack[++top]=x;
}
char pop(){
    return stack[top--];
}
int priority(char x){
    if(x=='+' || x=='-') return 1;
    if(x=='*'|| x=='/') return 2;
    return 0;
}
int main(){
    char exp[100], postfix[100];
    int i=0,j=0;
    scanf("%s",exp);
    while(exp[i]!='\0'){
        if(isalnum(exp[i])){
            postfix[j++]=exp[i];
        } else if(exp[i]=='('){
            push(exp[i]);
        } else if(exp[i]==')'){
            while(stack[top]!='('){
                postfix[j++]=pop();
            }
            pop();
        } else{
            while(top!=-1 && priority(stack[top])>=priority(exp[i])){
                postfix[j++]=pop();
            }
            push(exp[i]);
        }
        i++;
    }
   while(top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("%s", postfix);

    return 0;
}
