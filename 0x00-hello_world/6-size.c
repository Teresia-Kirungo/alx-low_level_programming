#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on.
 *
 * Description: This program prints the size of different types
 *              based on the computer it is compiled and run on.
 *              It uses the %zu format specifier to format and
 *              interpret the value of an argument as an unsigned
 *              size_t type.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
