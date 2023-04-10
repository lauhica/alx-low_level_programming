#include "main.h"
/**
 * _memset - Function used to fill a block of memory with a particular value
 * @n: length of memory area to be filled
 * @s: location to which constant value must be stored
 * @b: constant value used to fill the block of memory
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int value;

	for (value = 0; value < n; value++)
	{
		s[value] = b;
	}

	return (s);
}
