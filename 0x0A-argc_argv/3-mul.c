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
	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("argc = %d\n", argc);
	if (argc == 3)
	{
		printf("Total = %d\n", (a * b));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
