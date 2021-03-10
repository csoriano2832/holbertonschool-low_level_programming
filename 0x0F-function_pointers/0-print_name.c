#include "function_pointers.h"

/**
  * print_name - callsback other print name functions
  * @name: pointer to a name
  * @f: pointer to a function that prints the name
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *c))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
