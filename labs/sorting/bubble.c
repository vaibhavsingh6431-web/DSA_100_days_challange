//  bubble sort 
#include<stdio.h>
int main() {
    int n ;
     printf("enter number of elements: ");
     scanf("%d",&n);
     int arr[n];
     printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){   // sorting is done in decending order.. for asscending arr[j+1]<arr[j]
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}