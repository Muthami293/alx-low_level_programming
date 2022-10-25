#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: the string parameter
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
