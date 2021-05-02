#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @head: head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t numOfNodes = 0;

	if (head == NULL)
		return (numOfNodes);

	while (head != NULL)
	{
		head = head->next;
		numOfNodes += 1;
	}

	return (numOfNodes);
}
