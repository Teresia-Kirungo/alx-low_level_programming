#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates at most n bytes from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy characters from src to the end of dest, up to n bytes */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}
