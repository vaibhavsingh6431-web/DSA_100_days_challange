#include <stdio.h>
void matrixmultiply(int r1, int c1, int r2, int c2) {
    int a[r1][c1], b[r2][c2], ab[r1][c2];

    printf("Enter first matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix with 0
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            ab[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", ab[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    matrixmultiply(r1, c1, r2, c2);

    return 0;
}