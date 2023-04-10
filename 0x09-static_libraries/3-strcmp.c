#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: First pointer to compare
 * @s2: Second pointer to compare
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int string = 0;

	while (s1[string] != '\0' && s2[string] != '\0')
	{
		if (s1[string] != s2[string])
		{
			return (s1[string] - s2[string]);
		}
		string++;
	}
	return (0);
}
