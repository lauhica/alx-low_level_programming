#include "main.h"
/**
 * _strcat - Function that joins two strings
 * and adds the null byte at the end
 * @src: The source string to which will append to destination
 * @dest: The destination string to which source will be appended to
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;

	while (dest[destlength] != '\0')

	{
		destlength++;
	}

	while (src[srclength] != '\0')
	{
		dest[destlength] = src[srclength];
		destlength++;
		srclength++;
	}
	dest[destlength] = '\0';

	return (dest);
}
