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
	float age;
	char *owner;
} dog_t;

#endif

#ifndef MAIN_C
#define MAIN_C

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
