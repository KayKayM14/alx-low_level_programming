#include "main.h"

/**
 * _strcat - concatenate two stings (combine)
 * @dest: destination string
 * @src: the source string to be added to dest
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int d, k;

/*find the end of dest*/
	for (d = 0; dest[d] != '\0'; d++)
	{
		/*move to the end of string*/
	}
/*copy the src to the end of dest*/
		for (k = 0; src[k] != '\0'; k++, d++)
		{
			dest[d] = src[k];
		}
	/*Add null terminator*/
	dest[d] = '\0';

	return (dest);
}
