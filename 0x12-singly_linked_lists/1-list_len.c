#include "lists.h"

/**
 * list_len - prints length of the linked list
 * @h: linked list
 * Return: number of nodes(length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
