#include "variadic_functions.h"

/**
 * sum_them_all - function used to obtain the sum of all arguments
 * @n: the number of arguments presented
 * Return: the addition of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int value;
	int sum = 0;

	va_start(arglist, n);

	for (value = 0; value < n; value++)
	{
		sum += va_arg(arglist, int);
	}

	va_end(arglist);

	return (sum);
}
