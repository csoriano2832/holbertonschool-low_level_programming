#include "lists.h"

/**
 * list_len - returns the numbe of elements in a linked list
 * @h: a singly linked list
 *
 * Return: the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
