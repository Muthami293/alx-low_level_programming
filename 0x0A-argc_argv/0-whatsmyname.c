#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
