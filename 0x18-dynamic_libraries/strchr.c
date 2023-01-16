#include "main.h"

/**
  * _strchr - locate character in string
  * @s: string to check
  * @c: character to find
  * Return: NULL or pointer if found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			break;
	}

	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
