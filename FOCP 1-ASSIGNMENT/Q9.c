#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("The first occurrence of score 99 is at position %d.\n", i + 1);
            flag = 1;
            break;
        }
    }

    if (!flag)
        printf("Score 99 not found in the list.\n");

    return 0;
}
