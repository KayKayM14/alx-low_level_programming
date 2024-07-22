#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by @d.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
