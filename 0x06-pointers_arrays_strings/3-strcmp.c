#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: pointer character
 * @s2: pointer character
 * Return: integer of pointer type
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
