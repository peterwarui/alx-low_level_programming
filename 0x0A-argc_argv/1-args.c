#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguements
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
