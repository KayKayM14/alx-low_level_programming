#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++) /*print spaces*/
			{
				_putchar(' ');
			}
		for (k = 1; k <= i; k++) /*print hashes*/
		{
			_putchar('#');
		}
		_putchar('\n'); /*move to the next line after printing each hash*/
		}
	}
}
