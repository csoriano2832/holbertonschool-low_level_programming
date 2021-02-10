#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long a = 0;
	long b = 1;
	long fib = 1;

	for (i = 1; i <= 50; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%ld", fib);
		if (i != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
