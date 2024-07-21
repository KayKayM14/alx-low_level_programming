#include <stdio.h>

/**
* main - Prints all combinations of three digits with,
* and space followed by new line
*
* Return: returns 0
*/

int main(void)
{
	/*Print all possible combinations of three different digits*/
	int i, j, k;

	for (i= 0; i <= 7; i++) /*First digit (0 to 7)*/
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = k + 1; k <= 9; k++)
			{
				/*Print the first digit*/
				putchar(i + '0');
				/*Print the second digit*/
				putchar(j + '0');
				/*Print the third digit*/
				putchar(k + '0');
			/*Print separator except for the last combination*/
				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
