#include "main.h"
/**
 * print_last_digit - print last digit of the number
 * @c: parameter descriptor
 * Return: last digit
 */
int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return (last);
}
