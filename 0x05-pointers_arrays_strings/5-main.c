#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * Return: ALways 0.
 */
int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
