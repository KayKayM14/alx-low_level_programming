#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str); /*print each character of the string*/
	}
	_putchar('\n');
}
