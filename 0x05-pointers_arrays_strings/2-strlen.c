#include "main.h"
#include <stdio.h>

/**
* int _strlen - a function that returns the length of a string
* @str: to get the length of the string
* Return: the length of @str
*/
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
