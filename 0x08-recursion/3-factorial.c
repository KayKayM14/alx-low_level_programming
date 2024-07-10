#include "main.h"

/**
 * factorial - factorial of int
 * @n: int
 * Return: the factorial int
 */

int factorial(int n)
{
	if (n < 0) /*Error case: factorial of negative number is not defined*/
	{
		return (-1);
	}
	else if (n == 0) /*Base case: factorial of 0 is 1*/
	{
		return (1);
	}
	else
		return (n * factorial(n - 1)); /*Recursive case:*/
				/*n * factorial(n - 1)*/
}
