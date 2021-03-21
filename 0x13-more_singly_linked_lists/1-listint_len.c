#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: first element of the list
  *
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
