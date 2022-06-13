#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * followed by a new line
 * @a: integer
 * @n: integer
 * Return: Value of array @a
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n >= 0)
	{
		printf("%d", a[i]);
		if (i + 1 < n)
		printf(", ");
		i++;
	}
	printf("\n");
}
