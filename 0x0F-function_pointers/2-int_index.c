#include "function_pointers.h"

/**
  * int_index - searches or an int
  * @array: the array to check int
  * @size: size of array
  * @cmp: compare function
  *
  * Return: -1 if not present else int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
