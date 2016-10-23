#include <stdio.h>
#include <cs50.h>
#include <math.h>

int cents;
int coins = 0;

void reduce(int money) {
    while (cents % money != cents) {
    cents -= money;
    ++coins;
    }
}

int main(void) {
    float owed;
    printf("O hai! ");
    do {
        printf("How much change is owed?\n");
        owed = get_float(); 
    }
    while (owed <= 0);
    
    cents = round(owed * 100);
    reduce(25);
    reduce(10);
    reduce(5);
    reduce(1);
    
    printf("%d\n", coins);
    
    return 0;
}