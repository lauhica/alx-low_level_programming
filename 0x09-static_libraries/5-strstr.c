#include "main.h"
#include <stdlib.h>
/**
 * _strstr - Function used to locate a substring
 * @needle: the substring to be located
 * @haystack: longer string to be located
 * Return: a pointer to the beginning of the located substring
 * or return NULL if substring not located
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int string = 0;

	while (needle[string] != '\0')
		string = string + 1;

	while (*haystack)
	{
		for (a = 0; needle[a]; a = a + 1)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != string)
			haystack = haystack + 1;
		else
			return (haystack);
	}
	return (NULL);
}
