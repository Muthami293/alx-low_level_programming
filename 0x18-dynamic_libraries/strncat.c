#include "main.h"

/**
  * _strncat - concatenate two strings limited by n bytes
  * @dest: pointer to destination
  * @src: pointer to source
  * @n: size of the concatenated string
  * Return: concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';


	return (dest);
}
