#include "main.h"

/**
 * set_bit - setting the value of a bit
 * to 1 at a given point
 * @n: pointer pointing to the unsigned
 * integer
 * @index: index of the bit
 * Return: 1 if successful, or -1 if unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 50)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
