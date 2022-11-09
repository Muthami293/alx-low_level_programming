#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - makes copy of the given string
  * @str: string to copy
  * Return: Copy of string (pointer) or Null
  */

char *_strdup(char *str)
{
	int len;
	int i;
	char *strcopy;

	len = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	strcopy = malloc(sizeof(char) * len);

	if (strcopy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);

}
