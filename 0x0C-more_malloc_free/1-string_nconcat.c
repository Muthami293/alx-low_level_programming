#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * @n: limit
  * Return: pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i, j, num;
	char *concat_str;

	num = n;
	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0) /*NEGATIVE SIZE*/
		return (NULL);

	for (i = 0; s1[i]; i++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;
	if (num >= len2)
		num = len2;

	concat_str = malloc(sizeof(*concat_str) * (len1 + num + 1));

	if (concat_str == NULL)
	{
		free(concat_str);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < num; i++, j++)
		concat_str[i] = s2[j];

	concat_str[i] = '\0';

	return (concat_str);

}
