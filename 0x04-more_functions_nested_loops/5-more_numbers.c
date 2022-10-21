#include "main.h"

/**
  * more_numbers - Prints numbers from 0 - 14
  *
  * Return: void
  */

void more_numbers(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			int n;

			if ((c / 10) > 0)
			{
				n = c / 10;
				_putchar(n + '0');
			}

			n = c % 10;
			_putchar(n + '0');

		}
		_putchar('\n');

	}
}
