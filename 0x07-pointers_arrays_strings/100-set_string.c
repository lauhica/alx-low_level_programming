#include "main.h"
/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: the pointer to alter
 * @to: the value to alter the pointer to
 * Return: 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
