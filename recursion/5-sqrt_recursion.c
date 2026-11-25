#include "main.h"

/**
 * sqrt_helper - looks for the natural square root of n
 * @n: the number
 * @i: current candidate
 *
 * Return: the square root, or -1 if there is none
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);
	if (i == n / i && n % i == 0)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_helper(n, 1));
}
