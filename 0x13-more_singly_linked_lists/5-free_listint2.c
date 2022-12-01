#include "lists.h"

/**
  * free_listint2 - free the list
  * @head: pointer to the head node
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = p->next;
		free(p);
	}

	*head = NULL;
}
