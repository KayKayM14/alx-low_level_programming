#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: pointer to the string to be encoded
 * Return: pointer to modiefied string
 */
char *leet(char *str)
{
	char *ptr = str; /*pointer to iterate through string*/
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "44337071";
	int i;

	/*iterate through each character in the string*/
	for (; *ptr != '\0'; ptr++)
	{
		/*check each character and replace if necessary*/
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i]) /*if values is ch*/
			{
				*ptr = leet_nums[i]; /*update to num*/
			break; /*stop loop*/
			}
		}
	}
	return (str); /*return modified string*/
}
