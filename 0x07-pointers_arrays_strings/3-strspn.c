#include "main.h"
#include <string.h>

/**
 * _strspn - gets lenght of a prefix substring
 * @s: pointer of char type
 * @accept: pointer of character type
 */

unsigned int_strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
