#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: x^y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*Error case: negative exponent*/
	{
		return (-1);
	}
	else if (y == 0) /*Base case: x^0 = 1*/
	{
		return (1);
	}
	else if (y == 1) /*Base case: x^1 = x*/
	{
		return (x);
	}
	else
		return (x * _pow_recursion(x, y - 1)); /*Recursive case:*/
	/*x * x^(y-1)*/
}
