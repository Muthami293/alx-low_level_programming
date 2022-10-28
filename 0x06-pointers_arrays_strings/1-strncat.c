#include "main.h"

/**
  * _strncpy - copy string with n bytes
  * @dest: destination of the string
  * @src: source of the string
  * @n : n bytes
  * Return: string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);

}
