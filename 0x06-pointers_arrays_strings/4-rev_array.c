#include "main.h"
/**
 * reverse_array - Function that reverses an array integer
 * @a: The array of integers
 * @n: The number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int one;
	int two;

	for (one = 0; one < n--; one++)
	{
		two = a[one];
		a[one] = a[n];
		a[n] = two;
	}
}
