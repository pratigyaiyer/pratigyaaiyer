#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= (2 * rows - 1); j++) {
            // Print '+' for triangle boundaries
            if (j == rows - (i - 1) || j == rows + (i - 1) || i == rows) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

