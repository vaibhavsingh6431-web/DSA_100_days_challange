// insertion using switch case
#include <stdio.h>

int main() {
    int arr[100], n, choice, pos, value; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose insertion option:\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at position\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:   // Beginning
            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (int i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            n++;
            break;

        case 2:   // End
            printf("Enter value to insert: ");
            scanf("%d", &value);

            arr[n] = value;
            n++;
            break;

        case 3:   // Position
            printf("Enter position (0 to %d): ", n);
            scanf("%d", &pos);

            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;
            break;

        default:
            printf("Choice not found!");
    }

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

