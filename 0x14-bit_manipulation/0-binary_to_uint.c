#include "main.h"

/**
  * binary_to_uint - convert binary to unsigned int
  * @b: string of binary numbers
  * Return: unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, i = 1; len >= 0; len--, i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			sum += i;
	}

	return (sum);
}

