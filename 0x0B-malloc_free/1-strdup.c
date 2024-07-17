#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *dup_str; /*pointer to hold the duplicate string*/
	size_t len; /*Variable to hold the length of the input string*/

	/*Check if the input string is NULL*/
	if (str == NULL)
		return (NULL);

	/*Calculate the length of the input string (incl null terminator)*/
	len = strlen(str) + 1;

	/*Allocate memory for the duplicated string*/
	dup_str = malloc(len * sizeof(char));

	if (dup_str == NULL)
		return (NULL); /*check if memory allocation fails*/

	/*Copy the input string to the allocated memory*/
	strcpy(dup_str, str);

	return (dup_str); /*Return the pointer to the duplicated string*/
}
