#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int d, k;

	for (d = 0; d < 10; d++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar('0' + k / 10); /*to get the first digit*/
			_putchar('0' + k % 10); /*To get the last digit printed*/
		}
		_putchar('\n');
	}
}
