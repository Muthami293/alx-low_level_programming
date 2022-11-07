#include "main.h"

/**
  * _strcpy - prints a copy
  * @dest: destination of the copy
  * @src: source of the copy
  * Return: return char
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
