#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{

	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	printf("Last digit of %d is ", n);
	if (LastDigit > 5)
		printf("%d and is greater than 5\n", LastDigit);
	else if (LastDigit == 0)
		printf("%d and is 0\n", LastDigit);
	else
		printf("%d and is less than 6 and not 0\n", LastDigit);

	return (0);
}
