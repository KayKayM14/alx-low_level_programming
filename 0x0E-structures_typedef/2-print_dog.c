#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the members of a struct dog
 * @d: Pointer to the struct dog to print
 * Description: This function prints the name, age and ower of a struct dog
 * If any member is NULL, it prints "(nil)" instead of a member value
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
