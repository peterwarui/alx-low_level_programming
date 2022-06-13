#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: pointer of table
 * @src: pointer
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	size_t i, n = strlen(src);

	for (i = 0 ; i < n && src[i] != '\0' && src[i] != 0 ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n + 1 ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
