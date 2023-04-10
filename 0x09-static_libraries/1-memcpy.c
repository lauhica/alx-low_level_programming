#include "main.h"
/**
 * _memcpy - Function used to copy a block of data from a source address
 * to a destination address
 * @dest: destination in which bytes will be stored in
 * @src: source in which bytes will be copied from
 * @n: unidentified bytes to be copied from src to dest
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int value;

	for (value = 0; value < n; value++)
		dest[value] = src[value];

	return (dest);
}

