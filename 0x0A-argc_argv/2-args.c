#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguements it receives
 * @argc: arguements counter
 * @argv: arguements values
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
