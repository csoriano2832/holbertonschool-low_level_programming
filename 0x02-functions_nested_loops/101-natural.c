#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int index, mult3, mult5, sum;

	sum = 0;
	for (index = 1; index < 1024; index++)
	{
		if (index % 3 == 0)
		{
			mult3 = index;
			sum = sum + mult3;
		}
		else if (index % 5 == 0)
		{
			mult5 = index;
			sum = sum + mult5;
		}
	}
	printf("%i\n", sum);
	return (0);
}
