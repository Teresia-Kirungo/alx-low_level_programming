#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	/* ptr is declared and initialized with the value of the dest pointer */
	char *ptr = dest;

	/* Check is the pointer is at the end of dest, if not add 1 */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy each letter(character) from src to the end of dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}
