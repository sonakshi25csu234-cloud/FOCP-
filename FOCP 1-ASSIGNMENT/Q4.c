#include <stdio.h>

void swap_temp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Using temporary variable: a = %d, b = %d\n", a, b);
}

void swap_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using arithmetic operations: a = %d, b = %d\n", a, b);
}

void swap_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using bitwise XOR: a = %d, b = %d\n", a, b);
}

void swap_pointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n\n", a, b);

    swap_temp(a, b);
    swap_arithmetic(a, b);
    swap_xor(a, b);

    int x = a, y = b;
    swap_pointer(&x, &y);
    printf("Using pointers: a = %d, b = %d\n", x, y);

    return 0;
}
