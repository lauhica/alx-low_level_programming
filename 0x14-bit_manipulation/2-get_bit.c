#include "main.h"

/**
 * get_bit - returning the value of a bit
 * at a given point
 * @n: the value
 * @index: the given point
 * Return: the value of the bit at the given
 * point
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > 50)
		return (-1);

	a = 1 << index;
	return ((n & a) > 0);
}
