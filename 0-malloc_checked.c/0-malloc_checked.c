#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function used for the purpose of checking
 * the allocation of memory space
 * @b: unknown memory to be allocated
 * Return: the pointer that is created upon allocating memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
