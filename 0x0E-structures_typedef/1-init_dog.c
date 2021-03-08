#include "dog.h"

/**
 * init_dog - initialize various variables of type struct dog
 * @d: struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
