#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, sum = 0; 
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL){
        printf("No space allocated");
        exit(0);
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d", sum);

    free(arr);
    return 0;
}
