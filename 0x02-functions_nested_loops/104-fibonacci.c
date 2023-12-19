#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long int a = 1, b = 2, next, count;

    printf("%lu, %lu, ", a, b);

    for (count = 2; count < 98; count++)
    {
        next = a + b;

        if (count < 97)
            printf("%lu, ", next);
        else
            printf("%lu\n", next);

        a = b;
        b = next;
    }
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
