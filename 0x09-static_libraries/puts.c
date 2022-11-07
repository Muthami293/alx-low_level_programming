#include "main.h"

/**
 * _puts - prints the string to stdout
 * @str: string to be printed
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
