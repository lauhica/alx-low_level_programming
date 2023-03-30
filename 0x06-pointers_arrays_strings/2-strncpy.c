#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of character to be appended
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int string = 0;

	while (string < n && src[string] != '\0')
	{
		dest[string] = src[string];
		string++;
	}

	while (string < n)
	{
		dest[string] = '\0';
		string++;
	}
	return (dest);
}
