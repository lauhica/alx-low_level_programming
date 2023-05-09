#include "main.h"

/**
 * get_bit - function used to get the value of
 * a bit
 * @n: bit
 * @index: where the bit is located
 * Return: -1 if with error else the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
