#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 * @head: the first node of a linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int idx, jdx;
	int numNodes = 0;
	const listint_t *nodes[1024];

	for (idx = 0; head != NULL; idx++)
	{
		for (jdx = 0; jdx < idx; jdx++)
		{
			if (nodes[jdx] == head)
			{
				printf("-> [%p] %i\n", (void *)head, head->n);
				return (numNodes);
			}
		}
		nodes[idx] = head;
		printf("[%p] %i\n", (void *)head, head->n);
		numNodes++;
		head = head->next;
	}

	return (numNodes);
}
