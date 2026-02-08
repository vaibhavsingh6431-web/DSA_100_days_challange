#include<stdio.h>
int power(int x , int n){
    if(n==0){
        return 1;
    } else {
        return x * power(x,n-1);
    }
}
int main() {
    int n ,x;
    printf("enter number(n) and power(x) ");
    scanf("%d %d",&n,&x);
    printf("power =%d",power(x,n));
    return 0;
}
