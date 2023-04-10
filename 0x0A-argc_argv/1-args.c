#include <stdio.h>
#include "main.h"

/**
 * main - Function that will print number of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("argc = %d\n", argc - 1);
	return (0);
}
