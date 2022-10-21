#include <stdio.h>

/**
  * main - Print largest prime factor
  *
  * Return: 0 for success
  */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long divisor = 2;

	while (num > divisor)

	{
		if (num %  divisor == 0)
		{
			num = num / divisor;

			divisor = 2;
		}

		else
		{
			divisor++;
		}
	}

	printf("%lu\n", num);
	return (0);
}
