#include "holberton.h"

/**
 * check_prime - check for prime numbers
 * @n: numbers to check
 * @prime: numbers to use to check if it's prime
 *
 * Return: if number is prime or not
 */
int check_prime(int n, int prime)
{
	if (n % prime == 0)
		return (0);

	if (n / prime < prime)
		return (1);

	return (check_prime(n, prime + 1));
}

/**
 * is_prime_number - returns 1 if number is a prime number, otherwise 0
 * @n: numbers to check
 *
 * Return: 1 if valid, otherwise 0
 */
int is_prime_number(int n)
{
	int prime = 2;

	if (n <= 1)
		return (0);

	return (check_prime(n, prime));
}
