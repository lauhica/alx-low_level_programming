#include "main.h"
#include <stdio.h>
/**
 * print_array - Printing elements of an array, followed by new line
 * @a: Integer to be checked
 * @n: Integer to be checked
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d", a[x]);
	printf("\n");
}
