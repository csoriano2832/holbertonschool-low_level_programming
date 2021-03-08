#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees dogs
  * @fido: struct of dog
  *
  * Return: nothing
  */
void free_dog(dog_t *fido)
{
	free(fido->name);
	free(fido->owner);
	free(fido);
}
