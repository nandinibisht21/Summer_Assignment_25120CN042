#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1 stars per row)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}