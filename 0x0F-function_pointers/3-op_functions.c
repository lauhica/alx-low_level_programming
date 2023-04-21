#include "3-calc.h"

/**
 * op_add - function used to add two integer values
 * @a: the first number
 * @b: the second number
 * Return: the addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function used to subtract two integer values
 * @a: the first number
 * @b: the second number
 * Return: the difference betwen a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function used to multiply two integer values
 * @a: the first number
 * @b: the second number
 * Return: the mutiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function used to divide two integer values
 * @a: the first number
 * @b: the second number
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function used to determine the remainder of two integer values
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the divisible a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
