#include <stdio.h>
#include "main.h"

/**
 * main - Function to show its identification by name, followed
 * by new line.
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}
