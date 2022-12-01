#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at a given index
* @head: the linked list
* @index: position to delete the node
* Return: -1 if failed or 1 if successful
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL)
		return (-1);

	prev = *head;

	if (index == 0)
	{
		temp = prev->next;
		free(prev);
		*head = temp;
		return (1);
	}
	for (i = 0; i < (index - 1) && prev != NULL; i++)
		prev = prev->next;

	if (i != (index - 1) || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
