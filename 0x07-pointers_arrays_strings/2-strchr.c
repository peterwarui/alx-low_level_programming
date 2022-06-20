#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer of char type
 * @c: character
 */

char *_strchr(char *s, char c)
{
	char *pointer = strchr(s, (int) c);

	return (pointer);
}
