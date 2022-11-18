#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints the strings
  * @separator: string printed between the strings
  * @n: number of strings passed
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string == NULL)
			printf("(nil)");

		else
			printf("%s", string);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}


