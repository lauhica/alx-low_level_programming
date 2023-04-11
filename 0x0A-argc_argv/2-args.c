#include <stdio.h>
#include "main.h"

/**
 * main - Function used to print all arguments received.
 * @argc: first argument.
 * @argv: second argument.
 * Return: 0.
 */
int main(__attribute__((unused)) int argc,
__attribute__((unused)) char **argv)
{
	while (*argv)
		printf("%s\n", *argv++);
	return (0);
}
