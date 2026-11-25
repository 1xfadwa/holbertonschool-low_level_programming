#include "main.h"

/**
 * prime_helper - checks if n has a divisor starting from i
 * @n: the number
 * @i: current divisor
 *
 * Return: 1 if no divisor was found, otherwise 0
 */
int prime_helper(int n, int i)
{
	if (i > n / i)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
