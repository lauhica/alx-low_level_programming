#include "main.h"

/**
 * set_bit - function used to set value of a bit
 * @n: the pointer pointing to the bit
 * @index: the location to set the value
 * Return: -1 if error occurs else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
