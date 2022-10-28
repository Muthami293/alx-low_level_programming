#include "main.h"

/**
  * leet - encode the string
  * @s: the string to encode
  * Return: encoded string
  */

char *leet(char *s)
{
	int lett[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);

}
