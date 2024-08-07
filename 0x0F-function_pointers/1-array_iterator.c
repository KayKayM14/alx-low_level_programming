#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]); /*Call the function pointed to by 'action'*/
}
