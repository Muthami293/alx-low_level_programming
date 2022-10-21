#include "main.h"

/**
  * print_line - Print a straight line with length of n
  * @n: the integer or length of line
  * Return: void
  */

void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}

	_putchar('\n');

}
