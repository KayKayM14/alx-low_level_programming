#include "main.h"

/**
* _strcar - concanate two strings
* @dest: destination of string
* @src: source of second string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (len = 0; src[i] != '\0'; i++)
		dest[len++] = '\0';
	return (dest);
}
