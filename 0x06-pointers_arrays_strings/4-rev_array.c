#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	/*loop through the array up to the middle*/
	for (i = 0; i < n / 2; i++)
	/*swap elements from begining to end of array*/
	{
		temp = a[i];/*store current element in temp variabl*/
		a[i] = a[n - 1 - i];/*swap with corresponding*/
		/*element from the end*/
		a[n - 1 - i] = temp;/*place temp value in*/
				      /*swapped position*/
	}
}
