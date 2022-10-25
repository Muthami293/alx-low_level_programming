#include "main.h"
#include <stdio.h>

/**
  * print_array - Print array
  * @a: the array
  * @n: number of elements
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* check if last elemt is not null */

		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}

	printf("\n");

}
