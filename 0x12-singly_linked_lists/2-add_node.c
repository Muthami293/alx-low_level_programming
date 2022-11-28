#include "lists.h"

/**
  * add_node - add node to beginning of linked list
  * @head: linked list
  * @str: data for new node
  * Return: address of new element, or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len, i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[i]; i++)
		len++;

	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
