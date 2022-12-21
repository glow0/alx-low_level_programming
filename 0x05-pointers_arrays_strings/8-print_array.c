#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers.
 * @a: pointer to array.
 * An: number of array elements
 * Return: void.
 */
void print_array(int 8a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
