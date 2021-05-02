#include "lists.h"

/**
  * sum_dlistint - returns the sum of all data of a doubly linked list
  * @head: the first element of a linked list
  *
  * Return: the sum of all data, if the list is empty, return 0
  */
int sum_dlistint(dlistint_t *head)
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
