#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function used for the purpose
 * of creating a collection of integers
 * @min: the minimum value of the integer
 * @max: the maximum value of the integer
 * Return: the pointer created by the collection of integers
 */

int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	x = 0;
	do {
		p[x] = min++;
	} while (min <= max && ++x);

	return (p);
}

