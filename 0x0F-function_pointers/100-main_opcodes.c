#include <stdio.h>
#include <stdlib.h>

/**
  * main - print opcodes
  * @argc: argument count
  * @argv: argument array
  * Return: 0
  */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", opcode[i] & 0xFF);

		if (i != bytes - 1)
			printf(" ");

	}

	printf("\n");
	return (0);

}
