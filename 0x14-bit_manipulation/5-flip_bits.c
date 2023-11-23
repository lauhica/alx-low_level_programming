#include "main.h"

/**
 * flip_bits - returning the number of bits
 * needed to flip to get from one value to
 * another
 * @n: first value
 * @m: second value
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0, num1, num2;

	while (!(n == 0 && m == 0))
	{
		num1 = n & 1;
		num2 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (num1 != num2)
			a += 1;
	}
	return (a);
}
