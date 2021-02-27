#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: the number of arguments passed into it
  * @argv: pointer to char array of arguments passed into it
  *
  * Return: 0 on success.
  * Otherwise, return 1.
  */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (--argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
