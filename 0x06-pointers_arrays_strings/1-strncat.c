#include "main.h"
/**
 * _strncat - Function that joins two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to be appended
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int string1 = 0;
	int string2 = 0;

	while (dest[string1] != '\0')
	{
		string1++;
	}

	while (string2 < n && src[string2] != '\0')
	{
		dest[string1] = src[string2];
		string1++;
		string2++;
	}
	dest[string1] = '\0';

	return (dest);
}
