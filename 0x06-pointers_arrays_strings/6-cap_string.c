#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * cap_string - capitalizes al words of a string
 * @s:input
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int a = 0, i++;
	char sc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < 13)
		{
			if ((a == 0 || s[a - 1] == sc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}
	return (s);
}
