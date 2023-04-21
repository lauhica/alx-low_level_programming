#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for program to execute
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: values 1, 2 else exit
 */

int main(int argc, char *argv[])
{
	int bytes, value;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error");
		exit(2);
	}

	if (bytes == 0)
	{
		printf("\n");
		return (0);
	}
	printf("%02x", *((unsigned char *)(main)));
	for (value = 1; value < bytes; value = 1 + 1)
		printf("%02x", *((unsigned char *)(main + value)));
	printf("\n");
	return (0);
}

