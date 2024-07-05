#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the modified string
 */

char *leet(char *s)
{
	int i, k; /* declare counter loop variables*/
	char *a = "aAeEoOtTlL"; /*chars to be replaced*/
	char *b = "4433007711"; /*chars to replace with*/

	/*iterare through each character in the string s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*check if current chars in s matches any in char a*/
		for (k = 0; k < 10; k++)
		{
			if (s[i] == a[k])/*if there is a match*/
			{
				s[i] = b[k];
/*Replace the character in s with the corresponding character in b*/
				break;
			}
		}
	}
	return (s); /*return the modified string*/
}
