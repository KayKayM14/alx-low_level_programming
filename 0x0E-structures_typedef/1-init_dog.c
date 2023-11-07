#include "dog.h"
#include <stddef.h>

/**
 * struct dog - The desciption of the dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
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
