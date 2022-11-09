#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints all arguments
  * @argc: argument count
  * @argv: pointer to arguments
  *
  * Return: 0 for success, 1 for error
  */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	printf("argc = %d\n", argc);

	for (i = 1; i < argc; i++)
	{
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%s\n", argv[i]);
			mul = mul * atoi(argv[i]);
		}
		printf("Total =%d\n", mul);
	}

	return (0);
}
