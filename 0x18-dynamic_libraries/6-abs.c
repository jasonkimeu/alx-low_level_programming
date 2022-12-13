#include "main.h"

/**
 * _abs - fn to print abs numbers
 * @num: parameter
 * Return: absolute number
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-(num));
	}
	else
	{
		return (num);
	}
	_putchar('\n');
}
