#include "main.h"


/**
 * print_alphabet - print all alphabets in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
		la++;
	}
	_putchar('\n');
}
