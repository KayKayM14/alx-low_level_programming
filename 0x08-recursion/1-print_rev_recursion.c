#include "main.h"

/**
* _print_rev_recursion - a function that print a string in reverse
* @s - this is an address for the pointer to point into
* Return: 0 Always (successful)
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
