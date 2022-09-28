#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 != 0 && i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		}
		else
		{
			printf("%s", "Buzz");
		}
	}
	putchar('\n');

	return (0);
}
