#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings with a limit
 * @dest: destination string
 * @src: source string to be added to dest
 * @n: max number of bytes to concatenate from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest); /*find the length of dest*/
	int i;

	/*copy up to n characters from src to dest*/
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i]; /*copy each character from src to dest*/
		src++; /*move to the next charac in src*/
	}
	dest[len + i] = '\0'; /*add the null to end the string*/
	return (dest);
}
