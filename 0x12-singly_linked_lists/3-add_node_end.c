#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: the first element of a list
 * @str: the string to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}

/**
 * _strlen - returns the length of a given string
 * @str: a string
 *
 * Return: number of characters in the string
 */
int _strlen(const char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	return (len);
}
