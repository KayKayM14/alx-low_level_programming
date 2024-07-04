#include "main.h"
#include <strings.h>

/**
 * *_strncpy - a function that copies a string.
 * @dest: pointer to the destination array
 * @src: pointer to source string to be coied to dest
 * @n: max num of characters to be copied from 'src'.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*copy up to n characters from src to dest*/
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/*if src is shorter than n*/
	/*pad the rest with null characters*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
