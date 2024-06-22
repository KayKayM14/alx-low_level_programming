#include <stdio.h>
/**
 * main - main function
 *
 * putchar - prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	ch++;
	}
return (0);
}
