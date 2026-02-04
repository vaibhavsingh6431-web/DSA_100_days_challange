#include<stdio.h>
int main() {
    int n,pos;
    printf("enter number of element :");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter postion of element that want to delete(0to%d): ");
    scanf("%d",&pos);
    int index=pos-1;
    
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("array after deletion: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    return 0;
    
}