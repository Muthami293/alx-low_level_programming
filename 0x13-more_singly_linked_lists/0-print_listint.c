#include "lists.h"

/**
  * print_listint - print all ele of list
  * @h: list
  * Return: number of ele
  */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
