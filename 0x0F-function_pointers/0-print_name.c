#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name of the person to print.
 * @f: Pointer to a function that takes a char* and returns void.
 * This function calls the function pointed to by `f` to print
 * the `name` provided. It first checks if both `name` and `f`
 * are not NULL before making the call.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name); /*Call the function pointed to by 'f' with 'name'*/
}
