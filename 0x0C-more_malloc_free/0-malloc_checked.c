#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - allocates memory to unsigned int b
  * @b: unsiged int
  * Return: pointer to allocated memory or 98 as exit status
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
