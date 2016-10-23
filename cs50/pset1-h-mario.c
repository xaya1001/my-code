#include <stdio.h>
#include <cs50.h>

/**
 * Super Mario's two "half-pyramids"
 */

int main(void) {
    int height;
    
    // make sure the height between 0 and 23    // prompt the user for the height of the half pyramids
    do {
        printf("height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    
    // iterate over the height of pyramid one at a time    // iterate through the rows of the pyramids
    for (int i = 0; i < height; ++i) {   // better not start from 1
        for (int space = height - 1; space > i; --space) {
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; ++hash) {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash < i + 1; ++hash) {
            printf("#");
        }
        
        putchar('\n');
    }
    return 0;
}