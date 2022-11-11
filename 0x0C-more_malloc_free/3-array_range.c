
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - create an array with limits
  * @min: minimun number of integers
  * @max: max number of integers
  * Return: pointer
  */

int *array_range(int min, int max)
{
	int i, len;
	int *array_new;

	len = (max - min) + 1;

	if (min > max)
		return (NULL);

	array_new = malloc(sizeof(*array_new) * len);

	if (array_new == NULL)
	{
		free(array_new);
		return (NULL);
	}

	for (i = 0; i < len; i++, min++)
	{
		array_new[i] = min;
	}

	return (array_new);
}

