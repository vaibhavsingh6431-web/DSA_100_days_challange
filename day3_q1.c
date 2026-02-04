/* Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons */
#include<stdio.h>
int main() {
    int n ,found=0,comparision=0;
    printf("enter number of elments: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k; // key 
    printf("enter element want to search: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        comparision++;
        if(arr[i]==k){
            printf("element found at index: %d\n",i);
            found =1;
            break;
        }
    }
    if(!found){
        printf("not enter valid index!!!");

    }
    printf("Comparision: %d\n",comparision);
    return 0;

    
}