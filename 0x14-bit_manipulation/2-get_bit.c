#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* If the index is greater than the number of bits in n, return -1 */
	if (index >= (sizeof(unsigned long int) * 8))
				return (-1);

	/* Right shift n by index and get the least significant bit */
				return ((n >> index) & 1);
}
