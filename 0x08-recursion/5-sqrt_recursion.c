#include "main.h"
#include <stdio.h>

/**
 * checker - function used to check for inputted number
 * @n: the number to be squared and compared
 * @base: the number to check
 * Return: natural square root
 */
int checker(int n, int base)
{
	if (n * n > base)
		return (-1);
	if (n * n == base)
		return (n);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - Function used to give back natural square root of a number
 * @n: the number to be returned
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
