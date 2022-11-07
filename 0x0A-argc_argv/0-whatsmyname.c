#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: first parameter
  * @argv: second parameter
  *
  * Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("Name is: %s\n", argv[i]);
	}
	return (0);
}
