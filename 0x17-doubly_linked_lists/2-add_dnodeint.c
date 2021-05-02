#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a doubly linked list
 * @head: first element of the list
 * @data: value to be assigned to node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = data;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
