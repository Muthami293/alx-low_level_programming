#include "main.h"

/**
  * _isupper - Check if int is uppercase
  * @c: the integer to check
  * Return: 1 if true, 0 if lowercase
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
