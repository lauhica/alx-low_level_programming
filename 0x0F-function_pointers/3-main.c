#include "3-calc.h"

/**
 * main - program that will be used to run
 * a number of mathematical operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	o = argv[2];
	arg2 = atoi(argv[3]);

	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*o == '/' && arg2 == 0) ||
	(*o == '%' && arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(o)(arg1, arg2));

	return (0);

}
