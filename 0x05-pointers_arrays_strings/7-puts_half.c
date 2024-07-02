#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parameter to be printed
 */

void puts_half(char *str)
{
	int i, n;
	int length = 0;
/*calculate length of string*/
	for (i = 0; str[i] != '\0'; i++)
		length++;
	/*determine the starting point for printing*/
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	/*print from starting point to end of the string*/
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
