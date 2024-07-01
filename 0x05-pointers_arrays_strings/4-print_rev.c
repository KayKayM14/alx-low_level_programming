#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++; /*calculate length of string*/
	}
		/*print character in reverse*/
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]); /*print character in reverse*/
	}
	_putchar('\n');
}
