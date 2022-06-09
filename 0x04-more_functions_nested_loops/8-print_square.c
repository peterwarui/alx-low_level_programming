#include "main.h"

/**
 * print_square - prints a square, folowed by new line
 * @size: integer
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j = 0;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		j = 0;
	}
	if (size <= 0)
		_putchar('\n');
}
