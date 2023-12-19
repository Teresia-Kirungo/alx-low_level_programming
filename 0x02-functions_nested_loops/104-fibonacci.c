#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long int prev = 1, curr = 2, next, count;

	printf("%lu, %lu, ", prev, curr);

	for (count = 2; count < 98; count++)
	{
		next = prev + curr;

		if (count < 97)
			printf("%lu, ", next);
		else
			printf("%lu\n", next);

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
