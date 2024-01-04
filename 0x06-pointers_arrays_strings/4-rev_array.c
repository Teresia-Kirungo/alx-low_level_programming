#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	/* Swap elements from both ends of the array */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
