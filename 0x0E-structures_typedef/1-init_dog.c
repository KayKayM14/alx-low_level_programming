#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer to the struct dog to initalize
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
