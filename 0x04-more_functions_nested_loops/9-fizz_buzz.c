#include <stdio.h>

/**
 * main - prints numbers 1 to 100, follow by new line
 * But for multiples of 3 prints Fizz instead of number
 * Prints Buzz for multiples of 5
 * Prints FizzBuzz for multiples of both 3 and 5
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
			break;
		}
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if(i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
