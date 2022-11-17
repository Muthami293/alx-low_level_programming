#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - perform operations
  * @argc: argument count
  * @argv: argument array
  * Return: int
  */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;
	int (*f)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];
	f = get_op_func(sign);

	if (f == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*sign == '/' && num2 == 0) ||
			(*sign == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));

	return (0);

}
