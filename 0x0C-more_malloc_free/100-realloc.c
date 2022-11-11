#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - reallocate memory bloch using malloc and free
  * @ptr: previous pointer
  * @old_size: size of previous pointer
  * @new_size: size of new pointer
  * Return: new mem block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
