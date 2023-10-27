#include "main.h"
#include <stdio.h>

/**
* _strlen - a function that returns the length of a string
* @str: to pointer to the string to be measured
* Return: the length of the string
*/
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
