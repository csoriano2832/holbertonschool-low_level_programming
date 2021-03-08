#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - prints a struct dog
  * @d: structure of dog
  *
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);
}
