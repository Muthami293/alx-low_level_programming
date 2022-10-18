#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @c: the integer to get absolute value
 * Return: 0 for success
 */

int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}

	return (0);
}
