#include <stdio.h>
#include "main.h"

/**
  * main - prints the program name
  * @argc: argument count
  * @argv: argument vector pointer
  * Return: 0
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
