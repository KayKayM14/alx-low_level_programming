#include "main.h"

/**
* _strcpy - copies a string from source to destination
* @dest: destination string where the copy will be placed
* @src: the source string to be copied
*
* Return: a pointer to the destination string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
