#include "main.h"

/**
  * set_bit - sets value ofa bit to 1
  * @n: pointer of an unsigned long int
  * @index: index of the bit
  * Return: 1 if it worked, -1 if it ddnt
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	unsigned long int mask = 1;

	m = (sizeof(unsigned long int) * 8);
	if (index > m)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
