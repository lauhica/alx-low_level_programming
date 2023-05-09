#include "main.h"

/**
 * flip_bits - function used to return number
 * of bits needed to get from one to another
 * @n: first bit
 * @m: second bit
 * Return: distance between the bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int one = (sizeof(n) * 8);
	int two = 0;

	while (one--)
		two += (n >> one & 1) != (m >> one & 1);
	return (two);
}
