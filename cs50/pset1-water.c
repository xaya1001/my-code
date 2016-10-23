#include <stdio.h>
#include <cs50.h>

/**
 * Calculate how many bottles of water the shower spits out per minute
 */
 
int main(void) {
    const float GalPerMin = 1.5;  // gallons of water per minute
    const int OzPerGal = 128;     // fluid ounces per gallon
    const int OzPerBtl = 16;      // fluid ounces per bottle
    int min, btl;
    
    // ensure the user inputs a positive number of minutes
    do {
        printf("minutes: ");
        min = GetInt();
    }
    while (min <= 0);
    
    // calculate 
    btl = GalPerMin * min * OzPerGal / OzPerBtl;
    printf("bottles: %d\n", btl);
    
    return 0;
}