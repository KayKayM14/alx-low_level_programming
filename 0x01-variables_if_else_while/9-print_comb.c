#include <stdio.h>
/**
 * main - main function
 *
 * putchar - program that prints all possible
 * combinations of single-digit numbers
 * loops used: while
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
		if (num < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
