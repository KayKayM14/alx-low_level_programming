#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: The source string
 * Return: the pointer to dest
 *
 * Uses a for loop to copy each character frm
 * src to dest until it encounters the null byte (\0).
 * After copying all characters, it explicitly adds the
 * null byte at the end of dest.
 * Returns the pointer to dest.
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
