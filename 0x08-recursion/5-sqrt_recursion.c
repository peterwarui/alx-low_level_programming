#include "main.h"

/**
 * _sqr - returns square root of an integer
 * @n: integer
 */

int _sqr(int sqr, int n)
{
	if (sqr * sqr > n)
		return (-1);
	else if (sqr * sqr == n)
		return (sqr);
	return (_sqr(sqr + 1, n));
}

/**
 * _sqrt_recursion - returns natural square of an integer
 * @n: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqr(1, n));
}
