#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: the number of arguments  passed into main
  * @argv: pointer to char array of arguments passed into main
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
	{
		printf("%s\n", argv[idx]);
	}
	return (0);
}
