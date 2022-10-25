#include "main.h"

/**
  * print_rev - Print string in reverse form
  * @s: the string to reverse
  * Return: Void
  */

void print_rev(char *s)
{
	/* find lengthof string*/

	int len;
	int i;

	for (len = 0; s[len] != '\0'; len++)
		;


	/* reverse string using the length */
	/* last element = len - 1 */


	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
