#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory, or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int min_size, i;

	/*Handle special cases*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/*If new_size is equal to old_size, no need to reallocate*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	/*Allocate new memory block*/
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/*Copy data from old memory block to new memory block*/
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	/*Free the old memory block*/
	free(ptr);

	return (new_ptr);
}
