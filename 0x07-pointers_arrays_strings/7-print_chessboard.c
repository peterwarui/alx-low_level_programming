#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 0; i++)
	{
		for (j = 0; j < 0; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
