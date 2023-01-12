#include "lists.h"

/**
 * dlistint_len - function that return number of element in
 * linked list
 * @h: pointer to head
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		return (n);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);

}
