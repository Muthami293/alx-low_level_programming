#include "lists.h"

/**
  * free_listint - frees the list
  * @head: list to free
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
