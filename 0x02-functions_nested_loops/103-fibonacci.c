#include <stdio.h>

/**
 * main - print the sum of the first 32 fibonacci numbers that are even
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long a = 0;
	long b = 1;
	long fib = 1;
	long sum = 0;

	for (i = 1; i <= 32; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (fib % 2 == 0)
		{
			sum += fib;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
