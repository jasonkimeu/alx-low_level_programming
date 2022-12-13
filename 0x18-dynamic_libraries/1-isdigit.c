#include "main.h"

/**
 * _isdigit - fn to check for a digit
 * @c: parameter c
 * Return: Return 1 if c is a digit, return 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
