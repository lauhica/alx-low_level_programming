#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function used to initialize the newly created struct by
 * allocating values to the given member elements
 * @d: the pointer pointing to the struct data type
 * @name: the pointer pointing to a character
 * @age: decimal value assignment to variable age
 * @owner: the pointer pointing to a chracter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
