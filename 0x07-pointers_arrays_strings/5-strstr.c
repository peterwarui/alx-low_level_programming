#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: first string
 * @needle: string to find.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
