#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - Prints/returns value of last digit of a no
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Get the absolute value of the number */
    if (n < 0)
        n = -n;

    /* Extract the last digit */
    last_digit = n % 10;

    /* Print the last digit */
    _putchar(last_digit + '0');

    /* Return the value of the last digit */
    return (last_digit);
}
