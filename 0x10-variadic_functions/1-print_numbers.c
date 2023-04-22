#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function used to print arguments in integer form,
 * followed by a new line
 * @separator: the pointer pointing to the constant character
 * @n: the number of integers passed in the function
 * Return: Printed integer values
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int value;

	va_start(arglist, n);

	for (value = 0; value < n; value++)
	{
		printf("%d", va_arg(arglist, int));

		if (value != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(arglist);
}
