#include <stdio.h>

/**
 * prompts the user for a credit card number and then reports
 * whether it is a valid American Express, MasterCard, or Visa card number
 * test number: 378282246310005   AMEX
 *              371449635398431   AMEX
 *              5555555555554444  MasterCard
 *              5105105105105100  MasterCard
 *              4111111111111111  VISA
 *              4012888888881881  VISA
 *              4222222222222     VISA
 */

int main(void) {
    int digit;
    int sum = 0, len = 0;
    char *card = "";

    // ask user for input a credit card number
    printf("Number: ");
    long long number;
    scanf("%lli", &number);

    // calculate the checksum
    while (number > 0) {
        digit = number % 100;
        if (digit / 10 < 5) {
            sum += digit % 10 + digit / 10 * 2;
        }
        else {
            int temp = digit/10*2;
            sum += digit % 10 + temp % 10 + temp / 10;
        }

        number /= 100;
        len += 2;
    }

    // minus one when the lenth of number is odd
    if (digit < 10) {
        len -= 1;
    }

    // check whether the number is valid and which bank the credit card belongs to
    if (sum % 10 == 0) {
        if (digit == 3 && len == 15) {
            card = "AMEX\n";
        }
        else if (digit / 10 == 5 && len == 16) {
            card = "MASTERCARD\n";
        }
        else if ((digit / 10 == 4 || digit == 4) && (len == 13 || len == 16)) {
            card = "VISA\n";
        }
        else {
            card = "INVALID\n";
        }
    }
    else {
        card = "INVALID\n";
    }

    printf("%s", card);

    return 0;
}
