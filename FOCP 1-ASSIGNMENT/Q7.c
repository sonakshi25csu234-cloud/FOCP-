#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j; k++) {
                printf("%d", k % 2);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
