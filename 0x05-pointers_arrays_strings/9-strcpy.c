#include "main.h"
/**
 * *_strcpy - Copying the string pointed to by src to dest
 * @dest: Character to check
 * @src: Character to check
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
