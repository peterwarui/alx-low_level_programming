#include <unistd.h>

/**
 * _putchar - writes character to c
 * @c: character to rpint
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
