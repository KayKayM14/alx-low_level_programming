#include <stdlib.h>

/**
 * array_range -  creates an array of integers from min to max
 * @min: the min value
 * @max: the max value
 * Return: ptr to the newly created arrau, or NUll if it fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/*If min is greater than max, return NULL*/
	if (min > max)
	{
		return (NULL);
	}
	/*Calculate the size of the array*/
	size = max - min + 1;

	/*Allocate memory for the array*/
	array = malloc(size * sizeof(int));

	/*If malloc fails, return NULL*/
	if (array == NULL)
	{
		return (NULL);
	}
	/*Fill the array with values from min to max*/
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	/*Return pointer to the array*/
	return (array);
}
