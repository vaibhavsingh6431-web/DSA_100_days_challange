#include <stdio.h>
void Sum(int r, int c, int a[r][c]) {
    printf("Sum of each row:\n");
    for(int i = 0; i < r; i++) {
        int rowSum = 0;
        for(int j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }
    printf("Sum of each column:\n");
    for(int j = 0; j < c; j++) {
        int colSum = 0;
        for(int i = 0; i < r; i++) {
            colSum += a[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }
}
int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    Sum(r, c, a);
    return 0;
}
