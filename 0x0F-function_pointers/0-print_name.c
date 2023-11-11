#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - print name
 * @name: the name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
