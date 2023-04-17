#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure created to hold
 * various kinds of data types
 * @name: dog name expressed as a character pointer
 * @owner: dog owner expressed as a character
 * pointer
 * @age: dog age expressed an a float
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} my_dog;

#endif
