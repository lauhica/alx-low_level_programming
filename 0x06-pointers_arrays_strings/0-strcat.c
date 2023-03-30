#include "main.h"

/**
 * _strcat - Function that joins two strings and adds terminating
 * null byte at the end
 * @src: source string
 * @dest: destination string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int concateS1 = 0;
	int concateS2 = 0;

	while (dest[concateS1] != '\0')

	{
		concateS1++;
	}

	while (src[concateS2] != '\0')
	{
		dest[concateS1] = src[concateS2];
		concateS1++;
		concateS2++;
	}
	dest[concateS1] = '\0';

	return (dest);
}
