#include "main.h"

/**
 * print_last_digit - Prints and returns the value of the last digit of a number
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
