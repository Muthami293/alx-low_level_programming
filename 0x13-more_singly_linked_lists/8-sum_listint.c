#include "lists.h"

/**
  * sum_listint - find sum of all the data (n) in list
  * @head: list
  * Return: sum of the data(n) or 0 if list empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
