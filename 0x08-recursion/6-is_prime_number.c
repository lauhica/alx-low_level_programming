#include "main.h"
#include <stdio.h>

/**
 * checker - function used to check recursively
 * @n: number to increase
 * @base: number to check
 * Return: 1 if n is primt else 0
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base -1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}

/**
 * is_prime_number - function used to check for prime number
 * @n: number to be checked
 * Return: 1 if n prime else 0
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
