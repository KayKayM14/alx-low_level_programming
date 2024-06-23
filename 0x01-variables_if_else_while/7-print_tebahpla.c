#include <stdio.h>
/**
 * main - main function
 *
 * putchar - a program that prints the lowercase alphabet in reverse
 * Loop used: while
 *
 * Return: 0 - success
 */
int main(void)
{
	char ch = 'z';

	while (ch > 'a')
	{
		putchar(ch);
		ch--;

		putchar('\n');
	}
	return (0);
}
