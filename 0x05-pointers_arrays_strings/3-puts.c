#include "main.h"

/**
 * main - prints the string to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
