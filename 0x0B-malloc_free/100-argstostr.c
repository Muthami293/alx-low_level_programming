#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - concatenate all arguments
  * @ac: argument count
  * @av: argument vector
  * Return: pointer or null
  */

char *argstostr(int ac, char **av)
{
	int arg, index, i;
	int len = 0;
	char *argstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		for (index = 0; av[arg][index] != 0; index++)
			len++;
	len++;

	argstr = malloc(sizeof(char) * (len + ac));

	if (argstr == NULL)
	{
		free(argstr);
		return (NULL);
	}

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (index = 0; av[arg][index]; index++)
			argstr[i++] = av[arg][index];

		argstr[i++] = '\n';
	}

	return (argstr);

}
