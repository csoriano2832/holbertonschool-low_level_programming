#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *fido;
	char *name_copy;
	char *owner_copy;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	fido = malloc(sizeof(struct dog));
	if (fido == NULL)
		return (NULL);
	fido->name = name;
	fido->age = age;
	fido->owner = owner;

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
		return (NULL);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
		return (NULL);

	name_copy = _strcpy(name_copy, name);
	owner_copy = _strcpy(owner_copy, owner);

	return (fido);
}

/**
 * _strcpy - copies the string from src to dest
 * @dest: pointer to string
 * @src: pointer to another string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

/**
 * _strlen - return the lenght of a string
 * @s: pointer to a char
 *
 * Return: number of characters in the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
