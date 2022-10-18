#include "main.h"


/**
 * print_alphabet - print all alphabets in lowercase
 * Return; void
 */

void Print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_purchar(c);
	}
	_putchar('\n');
}
