#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
