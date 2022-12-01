#include "lists.h"

/**
  * reverse_listint - reverse linked list
  * @head: head of linked list
  * Return: head of reversed linked list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = next;
	}

	*head = prev;

	return (*head);
}
