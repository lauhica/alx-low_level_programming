#include "3-calc.h"

/**
 * get_op_func - function pointer used to perform
 * various pre-defined operations
 * @s: the pointer to the string character
 * Return: the pointer to the function corresponding
 * to the operator given as an argument
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	int value = 0;

	while (ops[value].op)
	{
		if (ops[value].op[0] == s[0] && s[1] == '\0')
			return (ops[value].f);
		value++;
	}
	return (NULL);
}
