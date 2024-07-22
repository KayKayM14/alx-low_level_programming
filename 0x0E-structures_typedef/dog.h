#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store dog information
 * @name: Pointer to a string representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This structure holds the information about a dog,
 * including its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
