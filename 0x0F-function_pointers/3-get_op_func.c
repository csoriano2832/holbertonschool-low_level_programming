#include "3-calc.h"

/**
  * get_op_func - selects the correct function to perform
  * @s: pointer to the operator used as an argument
  *
  *
  * Return: pointer to the function which will be used
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
