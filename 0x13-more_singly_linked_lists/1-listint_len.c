#include "lists.h"

/**
  * listint_len - prints num of elements in list
  * @h: the list
  * Return: num of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);

}
