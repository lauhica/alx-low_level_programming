#include "main.h"

/**
 * binary_to_uint - function used to convert a
 * binary value into a positive value
 * @b: the pointer pointing to a constant character
 * Return: converted number or 0 if one or more
 * characters in string b are not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = value * 2 + (*b++ - '0');
	}
	return (value);
}
