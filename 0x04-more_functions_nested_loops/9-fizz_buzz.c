#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * multiples of 3 print Fizz, multiples of 5 print Buzz
 * multiples of both 3 and 5 print FizzBuzz
 *
 * Return: null
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		if (i == 100)
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}
