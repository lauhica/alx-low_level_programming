#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - function used to create new dog
 * @name: name of dog, identified as a string
 * @age: age of dog, identified as number
 * @owner: owner of dog, identified as a string
 * Return: if function fails NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c;

	c = malloc(sizeof(dog_t));
	if (!c)
		return (NULL);

	if (name)
	{
		c->name = _strdup(name);
		if (!(c->name))
		{
			free(c);
			return (NULL);
		}
	}
	else
		c->name = NULL;
	c->age = age;

	if (owner)
	{
		c->owner = _strdup(owner);
		if (!(c->owner))
		{
			free(c->name);
			free(c);
			return (NULL);
		}
	}
	else
		c->owner = NULL;
	return (c);
}

/**
 * _strdup - containing copy of string
 * @str: pointer to the string
 * Return: New copy if successful else NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		p = malloc(sizeof(char) * size);

		if (p)
		{
			while (size = size - 1)
				p[size] = str[size];
			return (p);
		}
		return (NULL);
	}
}

