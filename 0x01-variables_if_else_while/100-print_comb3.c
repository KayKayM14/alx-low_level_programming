#include <stdio.h>
/**
 * main - main function
 *
 * putchar - Write a program that prints all possible
 * different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 9)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	i++;
	j = i+ 1;
	}
	putchar('\n');
	return 0;
}
