#include "main.h"

/**
* _isupper - Fucntion that checks for uppercase character.
* @c: The character to be checked.
*
* Return: 1 if c is an uppercase and 0 if otherwise.
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
