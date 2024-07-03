#include "main.h"

/**
 * _strcat - concatenates (combines) two strings
 *@dest: destination string
 *@src: source string to be appended (added)
 *Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int d, k;

/*find the end of dest*/
	for (d = 0; dest[d] != '\0'; d++)

		/*copy the src to the end of dest*/
		for (k = 0; src[k] != '\0'; k++, d++)
		{
			dest[d] = src[k];
		}
	/*Add null terminator*/
	dest[d] = '\0';

	return (dest);
}
