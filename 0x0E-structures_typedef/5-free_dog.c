#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Free a dog
 * @d: Pointer to the dog_t object to free
 *
 * Description: This function frees the memory allocated for the
 * dog_t object and its members.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
