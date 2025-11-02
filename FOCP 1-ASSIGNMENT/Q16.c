#include <stdio.h>

int main() {
    int n, pos, element, choice, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // Static size for simplicity
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nChoose insertion position:\n");
    printf("1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    switch (choice) {
        case 1:
            pos = 0;
            break;
        case 2:
            pos = n / 2;
            break;
        case 3:
            pos = n;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
