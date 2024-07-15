#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
/*loop through each byte up to n*/
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /*copy the byte from src to dest*/
	}
	return (dest); /*return the pointer to the destination*/
	/*memory area*/
}
