#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - returns value of x
 * raised to power of y
 * @x: integer
 * @y: integer
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 1)
			return (x);
		if (y == 0)
			return (1);

		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
