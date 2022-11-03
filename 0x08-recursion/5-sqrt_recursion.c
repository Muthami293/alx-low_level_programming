#include "main.h"

int find_root(int num, int root);

/**
  * find_root - returns root
  * @num: number to get its root
  * @root: root of the number
  * Return: natural root
  */


int find_root(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);

	return (find_root(num, root + 1));
}


/**
  * _sqrt_recursion - returns natural square root
  * @n: number to get square root
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_root(n, root));
}
