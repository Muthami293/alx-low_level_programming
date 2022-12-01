#include "lists.h"

/**
  * insert_nodeint_at_index - inserts new node at a given position
  * @head: linked list
  * @idx: index of where to insert new node
  * @n: the data for the new node
  * Return: address of new node or NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 && head != NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (i < (idx - 1))
		{
			temp = temp->next;
			i++;
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
