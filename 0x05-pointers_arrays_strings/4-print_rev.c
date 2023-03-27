#include "main.h"
/**
 * print_rev - Printing a string in reverse, followed by new line
 * @s: The string that should be printed in reverse
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
