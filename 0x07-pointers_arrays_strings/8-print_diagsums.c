#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function used to print the sum of the two diagonals of a
 * square matrix of integers
 * @a: array name
 * @size: array size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int value = 0;
	int value2 = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (value <= (size * size))
	{
		sum1 = sum1 + a[value];
		value = value + size + 1;
	}

	while (value2 < (size * size - 1))
	{
		sum2 += a[value2];
		value2 = value2 + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
