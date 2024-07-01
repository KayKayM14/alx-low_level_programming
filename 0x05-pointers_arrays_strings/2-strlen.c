#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of the string
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	/*declare the string first*/
	int length = 0;
	/*do not include the null terminator*/
	for (; *s != '\0'; s++) /*Loop through each character in the string*/
				  /*until the null terminator is reached*/
	{
		length++; /*Increment the length counter*/
	}
	return (length); /*Return the total length of the string*/
}
