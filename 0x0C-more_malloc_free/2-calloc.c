#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocate memory for an array
  * @nmemb: elements of array
  * @size: size of elements
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	/* set allocate mem to 0 */
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
