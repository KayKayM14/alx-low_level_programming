#include <stdio.h>
/**
 * main - main function
 *
 * putchar - program that prints all the numbers of base 16 in lowercase
 * Loops used: while
 *
 * Return: 0
 */
int main(void)
{
	char ch = '0';
/*Print hex digits '0-9'*/
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	ch = 'a';

/*print hexadecimal digits 'a-f'*/
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
