#include <stdlib.h>

/**
 * main - a function that allocates memory using malloc.
 * @b: pointer to memory
 * Return: allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	/*allocate mem usin malloc*/
	ptr = malloc(b);

	/*check if malloc failed (ptr NULL)*/
	if (ptr == NULL)
	{
		/*terminate the process with stats val 98*/
		exit(98);
	}

	/*returin pointer to allocated memory*/
	return (ptr);
}
