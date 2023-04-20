#include "function_pointers.h"

/**
 * print_name - function used to print a name
 * according to the set specification
 * @name: the string to be printed which denotes a person's name
 * @f: the pointer pointing to a function
 * Return: nothing should be returned
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
