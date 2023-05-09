#include "main.h"

/**
 * get_endianness - function that checks for endianness
 * Return: 0 if big endian else 1 if little endian
 */

int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *)&num);
}
