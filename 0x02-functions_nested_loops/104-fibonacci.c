#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long int prev = 0, curr = 1, next, count;

	for (count = 0; count < 98; count++)
	{
		if (count < 97)
			printf("%lu, ", curr);
		else
			printf("%lu\n", curr);

		next = prev + curr;
		prev = curr;
		curr = next;
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
