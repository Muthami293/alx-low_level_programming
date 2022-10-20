#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest of 3 numbers
 * Return: largest
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	if (a > b && b > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else
	{
		printf("%d is the largest number\n", largest);
	}


	return (largest);
}
