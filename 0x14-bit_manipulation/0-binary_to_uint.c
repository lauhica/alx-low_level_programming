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
	int string = 0;

	if (b[string] == '\0')
		return (0);

	while ((b[string] == '0') || (b[string] == '1'))
	{
		value <<= 1;
		value += b[string] - '0';
		string++;
	}

	return (value);
}
