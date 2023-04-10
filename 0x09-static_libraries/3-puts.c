#include "main.h"
/**
 * _puts - Prining a string, followed by a new line
 * @str: The string
 * Return: The length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
