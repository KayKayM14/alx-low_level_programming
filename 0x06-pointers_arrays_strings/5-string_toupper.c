#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase
 * letters of a string to uppercase.
 * @str: pointer to a string
 * Return: modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) /*iterate through each*/
		/*character until the null terminator '\0'*/
	{
		if (str[i] >= 'a' && str[i] <= 'z') /*check if chara*//*-cter is lowercase*/
		{
			str[i] = str[i] - 'a' + 'A'; /*convert lower*//*-case to uppercase*/
		}
	}
	return (str); /*return string*/
}
