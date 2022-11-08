#include "main.h"
#include <stdio.h>

/**
  * main - Prints number of arguments passed
  * @argc: argument count
  * @argv: pointer to arguments
  *
  * Return: 0
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
