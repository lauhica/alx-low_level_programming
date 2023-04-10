#include <stdio.h>
#include "main.h"

/**
 * main - Function that will print number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
