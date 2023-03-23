#include "main.h"

/**
* _isdigit - Function that checks for a digit number.
* @c: The digit to be checked.
*
* Return: 1 if c is a digit and 0 if otherwise.
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
