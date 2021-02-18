#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int index, mult, sum;

	sum = 0;
	for (index = 1; index < 1024; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			mult = index;
			sum += mult;
		}
	}
	printf("%i\n", sum);
	return (0);
}
