#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function used for the purpose of allocating
 * multiple blocks of memory for an array of nmemb elements
 * @nmemb: array elements for which multiple memory block will be allocated
 * @size: size of the bytes to be allocated
 * Return: the pointer created upon allocating memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

		for (x = 0; x < nmemb * size; x = x + 1)
		p[x] = 0;

		return (p);

}
