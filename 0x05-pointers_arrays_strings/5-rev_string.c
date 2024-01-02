#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c = 0, k;
	char *a, aux;

	if (*s == '\0')  /* Empty string, nothing to reverse */
		return;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k <= c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
