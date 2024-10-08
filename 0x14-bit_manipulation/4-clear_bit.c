#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within the valid range of bits */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

/* Create a mask that has all bits set to 1 except for the bit at 'index' */
	*n &= ~(1UL << index);
	return (1);
}
