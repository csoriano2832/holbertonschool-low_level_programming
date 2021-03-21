#include "lists.h"

/**
  * pop_listint - deletes the head node of a list
  * @head: a pointer to the first element in a list
  *
  * Return: the head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num = 0;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (num);
}
