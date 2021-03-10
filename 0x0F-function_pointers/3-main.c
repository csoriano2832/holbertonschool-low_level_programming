#include "3-calc.h"

/**
  * main - a program that performs simple operations
  * @argc: number of arguments passed to main
  * @argv: array containing string of arguments
  *
  * Return: 0 on success,
  * Otherwise, error handling is performed
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%i\n", result);

	return (0);
}
