#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 * prints all natural numbers from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i; /* Declaring the loop variable outside the loop*/

	if (n <= 98) /*Counting up from n to 98*/
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i); /*Last number should be followed by a new line*/
			}
				else
				{
					printf("%d, ", i);
				}
			}
		}
		else
		{
			/*Count down from n to 98*/
			for (i = n; i >= 98; i--)
			{
				if (i == 98)
				{
				printf("%d\n", i); /*Last number should be followed by a new line*/
			}
			else
			{
				printf("%d, ", i);
			}
	}
}
}
