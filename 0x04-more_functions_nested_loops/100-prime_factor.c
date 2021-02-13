#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	int fact, prime_fact;
	long num;

	num = 612852475143;
	for (fact = 2; fact <= num; fact++)
	{
		while (num % fact == 0)
		{
			num = num / fact;
			if (fact > prime_fact)
			{
				prime_fact = fact;
			}
		}
	}
	printf("%d\n", prime_fact);
	return (0);
}
