#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings and returns a pointer
 *  to the newly allocated space in memory.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory
 * containing the concatenated string or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str; /*pointer hold concat string*/
	size_t len1, len2; /*variables to hold the length of s1 and s2*/

	/*Treat NULL input strings as empty strings*/
	if (s1 == NULL)
	s1 = "";
	s2 = "";

	/*Calculate the lengths of the input strings*/
	len1 = strlen(s1);
	len2 = strlen(s2);

	/*Allocate memory for the concatenated string*/
	/*The size is the sum of both lengths plus 1 for the null terminator*/
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	return (NULL);

	/*Copy the first string into the allocated memory*/
	strcpy(concat_str, s1);

	/*Concatenate the second string to the first string*/
	strcat(concat_str, s2);

	/*Return the pointer to the concatenated string*/
	return (concat_str);
}
