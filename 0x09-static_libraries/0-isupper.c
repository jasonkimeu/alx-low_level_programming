#include "main.h"

/**
 * _isupper - fn finding upper and lower case
 * @c: parameter, a character
 * Return: 0 is lower and 1 is upper
 */
int _isupper(int c)
{
	int a = 'A';

	while (a <= 'Z')
	{
		if (c == a)
		{
			return (1);
		}
		a++;
	}
	return (0);
}
