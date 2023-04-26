#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function used to create a new dog
 * @name: name of dog, identified as a string
 * @age: age of dog, identified as number
 * @owner: owner of dog, identified as a string
 * Return: if function fails NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c;

	c = malloc(sizeof(dog_t));

	if (c == NULL)
		return (NULL);
	if (name == NULL)
	{
		free(c);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(c);
		free(name);
		return (NULL);
	}

	c->name = name;
	c->age = age;
	c->owner = owner;
	return (c);
}
