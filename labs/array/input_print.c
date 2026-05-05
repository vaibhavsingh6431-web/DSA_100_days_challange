// inputing and printing an array
#include<stdio.h>
int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array after input: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}