#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - prints string followed by a new line
 * @s: character
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
