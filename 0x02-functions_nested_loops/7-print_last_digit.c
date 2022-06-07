#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number.
 * @n: integer
 * Return: @n the value of the last digit
 */
int print_last_digit(int n)
{
	int v;

	if (n < 0)
		v = -1 * (n % 10);
	else
		v = n % 10;

	_putchar((v % 10) + '0');
	return (v % 10);
}
