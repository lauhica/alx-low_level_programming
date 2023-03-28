#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %a byte(s)\n", sizeof(char));
	printf("Size of an int: %a byte(s)\n", sizeof(int));
	printf("Size of a long int: %a bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %a byte(s)\n", sizeof(long long int));
	printf("Size of a float: %a byte(s)\n", sizeof(float));

	return (0);
}
