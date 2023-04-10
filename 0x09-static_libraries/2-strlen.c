#include "main.h"
/**
 * _strlen - Returning the length of a string
 * @s: Length of string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
