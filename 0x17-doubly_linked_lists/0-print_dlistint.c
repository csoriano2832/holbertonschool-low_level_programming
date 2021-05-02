#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @head: head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t numOfNodes = 0;

	if (head == NULL)
		return (numOfNodes);

	while (head != NULL)
	{
		printf("%i\n", head->n);
		head = head->next;
		numOfNodes += 1;
	}

	return (numOfNodes);
}
