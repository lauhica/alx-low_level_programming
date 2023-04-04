#include "main.h"
/**
 * set_string - Function that sets the value of a pointer to a character
 * @s: the pointer to alter
 * @to: the value to alter the pointer to
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
