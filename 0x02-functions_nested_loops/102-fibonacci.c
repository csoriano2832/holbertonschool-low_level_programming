#include <stdio.h>

/**
 *
 *
 */
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long fib = 2;

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
