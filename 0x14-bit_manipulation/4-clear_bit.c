#include "main.h"

/**
 * clear_bit - function used to clear bit
 * @n: the number
 * @index: the bit to be cleared
 * Return: -1 on error else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
