#include <stdio.h>
/**
 * main - main function
 *
 * putchar - prints the alphabet in lowercase, followed by a new line
 * writes a single character to the standard output
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
