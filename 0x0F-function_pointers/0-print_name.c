#include <stdio.h>

/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: pointer to the function that prints the name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name); /*Call the function pointed to by 'f' with 'name'*/
}

/**
 * This function uses the function pointer `f` to print the given
 * name in different formats. It first checks if both `name` and
 * `f` are not NULL. If they are valid, it calls the function
 * pointed to by `f` with `name` as the argumen
