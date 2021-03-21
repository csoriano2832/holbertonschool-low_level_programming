#include "lists.h"
#include <stdio.h>

/**
  * print_listint -prints all the elements of a list
  * @h: first element of the list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
