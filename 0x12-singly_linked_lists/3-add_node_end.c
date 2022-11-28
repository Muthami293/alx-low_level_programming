#include "lists.h"

/**
* add_node_end - func to add the last node to list
* @head: start node of linked list
* @str: string to add in the end node
* Return: pointer to the end node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;
	unsigned int len, i;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[i]; i++)
		len++;

	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}

	return (end_node);

}
