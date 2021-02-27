#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: the number of arguments passed into main
  * @argv: unused
  * Return: 0 on success
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
