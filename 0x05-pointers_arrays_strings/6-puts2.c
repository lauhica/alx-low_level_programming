#include "main.h"
/**
 * puts2 - Printing every other chracter of a string, followed by new line
 * @str: Character to check
 * Return: Always 0
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0';
			string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
