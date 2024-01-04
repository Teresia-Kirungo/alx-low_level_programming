#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies at most n bytes from src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	/* Copy characters from src to dest, up to n bytes or until the end of src */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}

	/*
	 * Pad the remaining bytes in dest with null bytes if n is greater than
	 * the length of src
	 */
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}

	return (dest);
}
