#include "main.h"

/**
 * _isdigit - fn to check digit
 * @c: parameter of type character
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	int i = '0';

	while (i <= '9')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}

	return (0);
}
