#include "main.h"

/**
  * flip_bits - how many bits to flip from one num to another
  * @n: number
  * @m: number2
  * Return: bits that differ
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	unsigned long int difference;

	difference = n ^ m;
	while (difference > 0)
	{
		diff += (difference & 1);
		difference  >>= 1;
	}
	return (diff);
}
