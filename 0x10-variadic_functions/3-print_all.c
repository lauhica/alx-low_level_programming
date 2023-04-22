#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function used to print a character
 * @arg: list of arguments
 */

void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	printf("%c", alpha);
}

/**
 * print_int - function used to print a integer
 * @arg: list of arguments
 */

void print_int(va_list arg)
{
	int value;

	value = va_arg(arg, int);
	printf("%d", value);
}

/**
 * print_float - function used to print a float
 * @arg: list of arguments
 */

void print_float(va_list arg)
{
	float value;

	value = va_arg(arg, double);
	printf("%f", value);
}

/**
 * print_string - function used to printa string
 * @arg: list of arguments
 */

void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function used to print everything, followed by a new line
 * @format: the string of characters representing the argument
 * @...: the number of arguments
 * @separator: the string to be printed
 */

void print_all(const char * const format, ...)
{
	va_list arglist;
	char *separator = "";
	int x = 0, y = 0;

	display_t f[] = {
		{"s", print_string},
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
	};

	va_start(arglist, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && ((*(format + x) != *(f[y].symbol))))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			f[y].f(arglist);
			separator = ", ";
		}
		x++;
	}
	printf("\n");

	va_end(arglist);
}
