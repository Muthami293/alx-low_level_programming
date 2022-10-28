#include "main.h"

/**
  * reverse_array - reverse an array
  * @a: the array to reverse
  * @n: number of elements in the array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int copy, start = 0;
	int end = n - 1;

	while (start < end)
	{
		/* swap */

		copy = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = copy;
		start++, end--;

	}

}
