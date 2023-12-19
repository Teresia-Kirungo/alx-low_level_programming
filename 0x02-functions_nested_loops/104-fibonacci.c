#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long int a = 1, b = 2, next;

    printf("%lu, %lu", a, b);

    for (int count = 2; count < 98; count++)
    {
        next = a + b;

        printf(", %lu", next);

        a = b;
        b = next;
    }

    printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    print_fibonacci();

    return (0);
}
