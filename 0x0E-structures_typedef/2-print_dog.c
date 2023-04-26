#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function used to print the elements accessed from the struct
 * @d: the pointer pointing to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
		printf("Age: %f\n", d->age);
	}
}
