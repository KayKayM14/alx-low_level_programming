#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Create a new dog
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner
 * Return: Pointer to the new dog_t object or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	size_t name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;

	d->name = malloc(name_len);
	d->owner = malloc(owner_len);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);

		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

	return (d);
}
