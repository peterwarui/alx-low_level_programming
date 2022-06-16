#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer character
 * @src: pointer character
 * Return: @dest of pointer type
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest), i, n = strlen(src);

	for (i = 0 ; i <= n ; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
