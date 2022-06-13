#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints string followed by new line
 * @str: input
 * Return: @str
 */

void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	while (len)
		_putchar(str[--len]);

	_putchar('\n');
}
