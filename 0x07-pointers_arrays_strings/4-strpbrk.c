#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer of char type
 * @accept: pointer of character type
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = strpbrk(s, accept);

	return (p);
}
