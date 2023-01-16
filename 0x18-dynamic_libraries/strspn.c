#include "main.h"

/**
  * _strspn - get length of substring
  * @s: string to check
  * @accept: substring
  * Return: length of substring
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len;

	len = 0;
	i = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
				break;
			}

			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (len);

		}

		i++;
	}

	return (len);
}
