#include "lists.h"

/**
  * pop_listint - delete head node and return the data n
  * @head: node to delete and return its data
  * Return: data in head node or 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = temp->next;

	free(temp);

	return (data);

}
