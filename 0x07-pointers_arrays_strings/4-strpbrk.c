#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - Function used to locate the first occurrence in the string
 * @s: the string to be searched
 * @accept: the bytes to be searched
 * Return: a pointer to the byte in @s which matches one of the bytes in
 * @accept or return NULL if byte not located
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a = a + 1)
		{
			if (*s == accept[a])
				return (s);
		}
		s = s + 1;
	}
	return (NULL);
}
