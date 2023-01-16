#include "main.h"

/**
  * _isdigit - Check if integer is digit
  * @c: integer type to check
  * Return: 1 if true, 0 if not
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
