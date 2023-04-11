#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers.
 * @argc: first argument.
 * @argv: second argument.
 * Return: 0.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
