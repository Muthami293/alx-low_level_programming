
#include "main.h"

/**
  * _puts - Prints the string
  * _putchar - writes the charcter str to stdout
  * @str: String param
  * Return: void
  */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*(str++));
	}

	_putchar('\n');
}
