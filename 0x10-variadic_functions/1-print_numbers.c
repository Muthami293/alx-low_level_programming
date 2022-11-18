#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints the number of int
  * @separator: string that is printed between numbers
  * @n: the number of int passed
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(nums, int);
		printf("%d", number);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}

