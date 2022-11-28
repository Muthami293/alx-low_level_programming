#include "lists.h"

/**
* free_list - func to free the memory of the list
* @head: the list to free
* Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
