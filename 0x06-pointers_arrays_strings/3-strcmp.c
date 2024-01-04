#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Integer value indicating the comparison result:
 *         - Negative value if s1 is less than s2.
 *         - Zero if s1 is equal to s2.
 *         - Positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
