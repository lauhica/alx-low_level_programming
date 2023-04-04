#include "main.h"
#include <stdlib.h>
/**
 * _strchr - Function that locates a character in a string
 * @c: the character to be located
 * @s: the string in which we are going to locate the character
 * Return: a pointer to the first occurrence of the character @c
 * in the string @s
 * Return: Null if the character is not located
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else

			return (s);
	}

	if (c == '\0')

		return (s);

	return (NULL);
}
