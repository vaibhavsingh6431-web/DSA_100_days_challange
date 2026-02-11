/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int start=0,end;
    printf("enter a string: ");
    scanf("%s",str);
    end=strlen(str)-1;
    while(start<end){
        if(str[start]!=str[end]){
            printf("NO");
            return 0;
        }
        start++;
        end--;
    }
    printf("YES");
    return 0;
}