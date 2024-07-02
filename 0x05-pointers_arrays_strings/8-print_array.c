#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

/*iterate through array elements to print each one*/
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /*print current element of array*/
	/*now print comma and space after the elements*/
		/*if its not the last element*/
	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
