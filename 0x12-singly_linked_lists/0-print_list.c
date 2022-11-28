#include "lists.h"

/**
  * print_list - prints all elements of list_t list
  * @h: linked list
  * Return: number of nodes in linked list
  */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num++;
		h = h->next;
	}

	return (num);

}
