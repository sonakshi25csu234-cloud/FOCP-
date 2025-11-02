#include <stdio.h>

int main() {
    int n, choice, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nChoose deletion position:\n");
    printf("1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            pos = 0;
            break;
        case 2:
            pos = n / 2;
            break;
        case 3:
            pos = n - 1;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
