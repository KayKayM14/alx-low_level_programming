#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	/* Handle the case where n is 0 */
	if (n == 0)
	{
		putchar('0');
		return;
	}
	/* Recursive call to print the higher-order bits first */
	if (n >> 1)
		print_binary(n >> 1);
	/* Print the least significant bit of the current n */
	putchar((n & 1) ? '1' : '0');
}
