#include "main.h"

/**
 * _islower - fn to check for lowercase character
 * @c: parameter c
 * Return: returns number of repetition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
