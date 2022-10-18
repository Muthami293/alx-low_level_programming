#include <stdio.h>
/**
 * main - print even valued terms of fibonacci
 * Return: 0 for success
 */

int main(void)
{
	long int n1, n2, fn;
	long int sum;

	n1 = 1;
	n2 = 2;
	sum = 0;
	fn = 0;

	while (fn < 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;

		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
