#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: the first element of the list
 * @index: index of the node, starting from 0
 *
 * Return: the node, if it doesn't exist, returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (idx < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		idx++;
	}

	return (head);
}
