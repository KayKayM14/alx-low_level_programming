#include "main.h"

/**
* _strcat - concanate two strings
* @dest: destination of string
* @src: source of second string
* Return: a pointer to the destination string (dest)
*/

char *_strcat(char *dest, char *src);
{
	int dest i, int src c;
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		c++;
	}
	while (src[c] != '\0')
	{
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
