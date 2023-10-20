#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: destination string
* @src: source string to be added to dest
* Return: a pointer to the destination string (dest)
*/
char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];
	dest[len] = '\0';
	return (dest);
}
