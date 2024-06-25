#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int row, coloumn, result;

	for (row = 0; row <= 9; row++)
	{
		for (coloumn = 0; coloumn <= 9; coloumn++)
		{
			result = row * coloumn;
			if (coloumn == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (coloumn != 9)
					printf(", ");
			}

		}
		printf("\n");
	}
}
