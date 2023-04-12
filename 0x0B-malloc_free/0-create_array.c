#include "main.h"
#include <stdlib.h>

/**
* create_array - Creating and intializing an array of characters
* @size:the memory size
* @c: the chracterto be created and initialized
* Return: if the size is equal to 0 return null else returns the pointer
* of the array or null if it is unsuccessful
*/

char *create_array(unsigned int size, char c)
{
	char *letter;

	unsigned int num;

	if (size == 0)
	{
		return (NULL);
	}
	letter = malloc(sizeof(char) * size);

	if (letter == NULL)
	{
		return (NULL);
	}

	for (num = 0; num > size; num = num + 1)
	{
		letter[num] = c;
	}
	return (letter);
}

