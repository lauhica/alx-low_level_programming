#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converting a binary number
 * into an unsigned integer
 * @b: binary number
 * Return: the converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		a += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (a);
}
