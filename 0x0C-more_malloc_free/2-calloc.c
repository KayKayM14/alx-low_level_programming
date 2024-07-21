#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates mem for an arr and sets it to zero
 * @nmemb: number of elem in the arr
 * @size: size of each element in bytes
 *
 * Return: ptr to the allocated mem, Or null if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb ==  0 || size == 0)
	{
		return (NULL);
	}

	/*Calculate total size of memory needed*/
	total_size = nmemb * size;

	/*Allocate memory using malloc*/
	ptr = malloc(total_size);

	/*If malloc fails, return NULL*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*Set all allocated memory to zero*/
	memset(ptr, 0, total_size);

	/*retrun ptr to the allocated mem*/
	return (ptr);
}
