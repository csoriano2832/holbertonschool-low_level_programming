#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the first element of a linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL;
	listint_t *nextNode;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}
	*head = previousNode;
	return (*head);
}
