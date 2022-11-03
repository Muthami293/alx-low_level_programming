#include "main.h"

/**
  * _pow_recursion - function that returns x raised to y
  * @x: first integer
  * @y: second integer
  * Return: return the value
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0 || x == 1)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));

}
