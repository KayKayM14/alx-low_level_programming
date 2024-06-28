#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, d;

		for (d = 0; d < size; d++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

