#include "main.h"

/**
  * print_number - Print integers
  * @n: number to check
  * Return: void
  */

void print_number(int n)
{
	unsigned int tens, digit, number = n;
	double bucket = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			number = n *= -1;
			_putchar('-');
		}

		while (bucket <= number)
			bucket *= 10;

		tens = bucket / 10;

		while (tens >= 1)
		{
			digit = number / tens;
			_putchar(digit + '0');
			number = (number - (tens * digit));
			tens /= 10;
		}
	}
}
