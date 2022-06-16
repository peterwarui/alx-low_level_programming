#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int k, i = 0;

	for (; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}

}
