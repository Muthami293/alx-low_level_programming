#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: the integer to get absolute value
 * Return: 0 for success
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
