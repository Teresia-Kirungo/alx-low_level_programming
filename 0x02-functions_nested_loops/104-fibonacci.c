#include <stdio.h>

/**
 * Custom data structure to represent large numbers
 */
typedef struct {
    unsigned int digits[3000];
    int size;
} BigNumber;

/**
 * Initializes a BigNumber with a single digit
 */
BigNumber initBigNumber(int digit) {
    BigNumber result;
    for (int i = 0; i < 3000; i++) {
        result.digits[i] = 0;
    }
    result.digits[0] = digit;
    result.size = 1;
    return result;
}

/**
 * Adds two BigNumbers
 */
BigNumber addBigNumbers(BigNumber a, BigNumber b) {
    BigNumber result = initBigNumber(0);
    int carry = 0;

    for (int i = 0; i < a.size || i < b.size || carry; i++) {
        int sum = a.digits[i] + b.digits[i] + carry;
        result.digits[i] = sum % 10;
        carry = sum / 10;
        if (i == result.size && (a.digits[i] != 0 || b.digits[i] != 0 || carry != 0)) {
            result.size++;
        }
    }

    return result;
}

/**
 * Prints a BigNumber
 */
void printBigNumber(BigNumber num) {
    for (int i = num.size - 1; i >= 0; i--) {
        printf("%u", num.digits[i]);
    }
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void) {
    BigNumber prev = initBigNumber(1);
    BigNumber curr = initBigNumber(2);
    BigNumber next;

    printBigNumber(prev);
    printf(", ");
    printBigNumber(curr);
    printf(", ");

    for (int count = 3; count <= 98; count++) {
        next = addBigNumbers(prev, curr);

        if (count < 98) {
            printBigNumber(next);
            printf(", ");
        } else {
            printBigNumber(next);
            printf("\n");
        }

        prev = curr;
        curr = next;
    }
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void) {
    print_fibonacci();
    return (0);
}
