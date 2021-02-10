#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long fib = 1;

	for (i = 1; i <= 98; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu", fib);
		if (i != 98)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
