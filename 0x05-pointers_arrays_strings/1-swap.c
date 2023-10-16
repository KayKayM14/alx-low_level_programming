#include "main.h"
#include <stdio.h>

/**
* swap_int - A function that swaps the values of two integers
* @a: First integer being swapped
* @b: Second integer being swapped
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
