// deletion 
#include<stdio.h>
int main(){
    int arr[100],n,k,ITEM,i,j;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter elements:\n ");
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter index to delete (1 to%d): ",n-1);
    scanf("%d",&k);
    if(k<0||k>=n){
        printf("invalid index!");
    } else{
        ITEM=arr[k];

        for(j=k;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        n--;
    }
    printf("deleted element:%d\n",ITEM);
    printf("array after deletion: \n");
    for(i=0;i<n;i++){
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
    }