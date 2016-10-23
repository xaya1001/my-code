#include <stdio.h>

/**
 * Super Mario's "half-pyramids"
 */


int main(void) {
    int height;

    do {
        printf("height: ");
        scanf("%i", &height);
    }
    while (height > 23 || height < 0);

    for (int i = 0; i < height; ++i) {
        for (int space = height - 1; space > i; --space) {
            printf(" ");
        }
        for (int hash = 0; hash < i + 2; ++hash) {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
