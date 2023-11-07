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
		printf("name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("age: %6.f\n", d->age);
		printf("owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
