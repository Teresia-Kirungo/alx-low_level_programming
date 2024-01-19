#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	printf("%s\n", mul(argv[1], argv[2]));

	return (0);
}

/**
 * mul - Multiply two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
char *mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, n1, n2, carry, sum;
	char *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + (result[k] - '0') + carry;
			result[k] = (sum % 10) + '0';
			carry = sum / 10;
		}

		if (carry > 0)
			result[k] = (result[k] - '0') + carry + '0';
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}
