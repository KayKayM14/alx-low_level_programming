#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)
{
	/*print all possible combos of 2 diff digits*/
	int i, j;
	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			/*print the first digit*/
			putchar(i + '0');
			/*print the second digit*/
			putchar(j + '0');
			/*if its not the last combo, print separator*/
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
