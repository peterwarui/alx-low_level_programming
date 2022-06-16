#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: an input string
 * Return: char pointers to converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

	return (s);
}
