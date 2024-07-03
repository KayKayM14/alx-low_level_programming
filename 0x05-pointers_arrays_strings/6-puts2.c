#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: the string to print
 * we going to print this out in 2's,
 * which means only even numbers.
 * we increment this by 2, which means it will
 * skip every odd number and print out even numbers.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i ++) /*skips character and print 2*/
	{
		if (i % 2 ==0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
