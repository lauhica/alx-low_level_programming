#include "main.h"
/**
 * _pow_recursion - Function used to give back the value of x
 * raised to the power of y
 * @x: the value to be returned
 * @y: the power of value x
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
