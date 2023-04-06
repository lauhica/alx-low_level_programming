#include "main.h"
/**
 * factorial - Function used to give back the factorial of a given  number
 * @n: the number to be returned
 * Return: -1 to show an error if if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
