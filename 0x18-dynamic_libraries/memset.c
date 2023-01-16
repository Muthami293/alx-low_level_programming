#include "main.h"

/**
  * _memset - fill the first n bytes with b
  * @b: the char to fill with
  * @s: the memory area
  * @n: number of bytes to be filled
  * Return: pointer in s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);

}
