#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function used to print out strings as the finale
 * arguments, followed by a new line
 * @separator: the pointer pointing to the constant character
 * @n: the number of integers passed in the function
 * Return: Printed strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int value;
	char *letter;

	va_start(arglist, n);

	for (value = 0; value < n; value++)
	{
		letter = va_arg(arglist, char *);
		if (letter != NULL)
			printf("%s", letter);
		else
			printf("(nil)");
		if (separator != NULL && value < n -1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arglist);
}
