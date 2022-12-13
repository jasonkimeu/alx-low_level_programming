#include "main.h"

/**
 * _isupper - fn to check for uppercase character
 * @c: parameter c
 * Return: Return 1 for uppercase and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
