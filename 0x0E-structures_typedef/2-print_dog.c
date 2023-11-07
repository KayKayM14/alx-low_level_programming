#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the members of a struct dog
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %.6f\n", d->age);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
