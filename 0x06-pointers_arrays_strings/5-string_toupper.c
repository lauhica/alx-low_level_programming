#include "main.h"
/**
 * string_toupper - Function that changes lowercase letters to uppercase
 * @i: pointer to string
 *
 * Return: i
 */
char *string_toupper(char *i)
{
	int string = 0;

	while (i[string] != '\0')
	{
		if (i[string] >= 'a' && i[string] <= 'z')
			i[string] = i[string] - 32;
		string++;
	}
	return (i);
}
