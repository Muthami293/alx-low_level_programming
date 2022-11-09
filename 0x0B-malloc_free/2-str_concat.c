#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer or NULL
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concat_str;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;
	for (j = 0; s2[j]; j++)
		len2++;
	len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j <= len2; i++, j++)
		concat_str[i] = s2[j];

	return (concat_str);
}
