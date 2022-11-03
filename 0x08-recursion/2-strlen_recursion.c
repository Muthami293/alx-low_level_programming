#include "main.h"

/**
  * _strlen_recursion - return length of a string
  * @s: the string to check length
  * Return: int(length of string)
  */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len++;

	return (1 + _strlen_recursion(s + 1));

}
