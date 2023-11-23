#include "main.h"

/**
 * clear_bit - setting the value of a bit to 0
 * at a given point
 * @n: pointer
 * @index: the given point
 * Return: 1 if successful, or -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
