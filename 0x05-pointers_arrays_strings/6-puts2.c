#include "main.h"

/**
  * puts2 - print every other number
  * @str: string to check
  * Return: void
  */

void puts2(char *str)
{
	int i;
	int index = 0;

	for (index = 0; str[index] != '\0'; index++)
		;

	for (i = 0; i < index; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
