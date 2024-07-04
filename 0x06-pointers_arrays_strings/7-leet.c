#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: pointer to the string to be encoded
 * Return: pointer to modiefied string
 */
char *leet(char *str)
{
	char *ptr = str; /*pointer to iterate through string*/
	/*iterate through each character in the string*/
	for (; *ptr != '\0'; ptr++)
	{
		/*check each character and replace if necessary*/
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		else if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3'; /*replace with 3*/
		else if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		else if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		else if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';
	}
	return (str); /*return modified string*/
}
