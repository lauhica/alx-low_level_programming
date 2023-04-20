#include "function_pointers.h"

/**
 * array_iterator - function used to run a function given
 * as an argument to a series of array elements
 * @array: the integer array
 * @size: the size of the array
 * @action: the pointer pointing to a function
 * Return: nothing to be returned
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
