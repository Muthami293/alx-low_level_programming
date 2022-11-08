#include "main.h"
#include <stdio.h>

/**
  * main - Prints all arguments
  * @argc: argument count
  * @argv: pointer to arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
