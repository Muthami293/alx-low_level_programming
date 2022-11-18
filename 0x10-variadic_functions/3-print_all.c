#include "variadic_functions.h"
#include <stdio.h>

/**
* print_int - print int format
* @arg: argument
*/
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
* print_char - print char format
* @arg: argument
*/
void print_char(va_list arg)
{
	int letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
* print_float - print float format
* @arg: argument
*/
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
* print_string - print string format
* @arg: argument
*/
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
  * print_all - print all input values despite the data type
  * @format: array of data types
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list arg;
	char *separator = "";

	format_t func[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (func[j].symbol != '\0')
		{
			if (func[j].symbol == format[i])
			{
				printf("%s", separator);
				func[j].f(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(arg);
}
