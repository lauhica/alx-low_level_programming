#include "main.h"
#include <stdlib.h>

/**
*_strdup - Returning a pointer to a new location in the memory space,
* this location will host a copy of the string given as a argument
* @str: the new string which will be duplicated once copied
* Return: if string is equal to null than the return value is null else
* if returns a pointer to the copied string if successful and null if memory
* avaiable is not sufficient to host the string
*/

char *_strdup(char *str)
{
	char *letter;

	int len_str, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len_str = 0; str[len_str]; len_str = len_str + 1)
	{
		letter = malloc(sizeof(char) * (len_str + 1));
	}

	if (!letter)
	{
		return (NULL);
	}

	for (i = 0; i < len_str; i = i + 1)
	{
		letter[i] = str[i];
	}

	letter[i] = '\0';
	return (letter);
}
