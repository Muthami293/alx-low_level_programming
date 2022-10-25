#include "main.h"

/**
  * rev_string  - Reverse string
  * @s: pointer of string
  * Return: void
  */

void rev_string(char *s)
{
	int i, index = 0;
	char str[1000000];


	for (i = 0; s[i] != '\0'; i++)
	{
		str[i] = *(s + i);
	}

	i--;

	for (; i >= 0; i--)
	{
		*(s + index) = *(str + i);
		index++;
	}

	i++;
}
