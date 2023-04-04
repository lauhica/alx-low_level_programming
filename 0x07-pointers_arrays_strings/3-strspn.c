#include "main.h"
/**
 * _strspn - Function used to get the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to be included
 * Return: the number of bytes in the initial segment of @s which
 * consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a = a + 1)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b = b + 1)
			{
				if (s[a] == accept[b])
					c = c + 1;
			}
		}
		else
			return (c);
	}
	return (c);
}
