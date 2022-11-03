#include "main.h"

/**
  * factorial - return factorial of given number
  * @n: the number
  * Return: integer(Result)
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
