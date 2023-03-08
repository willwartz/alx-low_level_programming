#include "main.h"
/**
 * prime_check- checks for primes.
 * @n: number of interest.
 * @i: iteratives.
 * Return: 1 (Success), 0 otherwise.
 */
int prime_check(int n, int i)
{
	if (n % i != 0)
		return (prime_check(n, i + 1));
	else
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
}

/**
 * is_prime- checks for primes.
 * @n: number of interest.
 * Return: 1 (Success), 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_check(n, 2));
}
