#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory block
 * @ptr: ptr to the previously allocated mem
 * @old_size: size of the old mem block
 * @new_size: new size for the mem block
 *
 * Return: ptr to the newly allocated mem, or null if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;

	/*Handle special cases*/
	if (new_size == 0)
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
	((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	/*free old mem block*/
	free(ptr);

	return (new_ptr);
}
