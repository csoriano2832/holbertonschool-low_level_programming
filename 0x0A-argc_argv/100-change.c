#include <stdio.h>
#include <stdlib.h>
int getCoins(int coins[], int total);

/**
  * main - prints the minimum number of coins to make change
  * for an ammount of money.
  *
  * @argc: the number of command line arguments
  * @argv: string array that contains the arguments passed
  *
  * Return: 0 on success. Otherwise, it returns 1 on error.
  */
int main(int argc, char *argv[])
{
	int total;
	int coins[] = {25, 10, 5, 2, 1};

	if (--argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", getCoins(coins, total));
	return (0);
}

/**
  * getCoins - calculates the number of coins needed to make change
  * for an ammount of money.
  *
  * @coins: an array containing valid coin values (25, 10, 5, 2, 1)
  * @total: the number that needs to be reached to make change
  *
  * Return: the number of coins used
  */
int getCoins(int coins[], int total)
{
	int coinsUsed = 0, idx;

	for (idx = 0; coins[idx] != '\0'; idx++)
	{
		while (total != 0)
		{
			if (coins[idx] <= total)
			{
				total -= coins[idx];
				coinsUsed++;
			}
			else
			{
				break;
			}
		}
		if (total == 0)
			break;
	}
	return (coinsUsed);
}
