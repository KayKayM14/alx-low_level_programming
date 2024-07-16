#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array to create (number of elements).
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if it fails or if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	/*allocate memory to the array*/
	/*size * sizeof(char)ensures we allocate enough memory for size char*/
	arr = malloc(size * sizeof(char));

	/*check if memory allocation was successful*/
	if (arr == NULL)
		return (NULL);
	/*Return NULL if memory allocation failed*/

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
