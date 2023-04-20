#include "function_pointers.h"

/**
 * int_index - function used to look for an
 * integer value
 * @array: the array
 * @size: the size of the array
 * @cmp: the pointer pointing to the function
 * Return: if no member matches than return -1 else
 * if the size of the array is less than or equal to
 * 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
