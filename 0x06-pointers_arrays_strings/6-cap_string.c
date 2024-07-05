#include "main.h"

/**
 * is_seperator - checks if a character is a seperator.
 * @c: charcters to check
 * Return: 1 if character is a seperator, otherwise 0
 */

int is_seperator(char c)
{
	char seperators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; seperators[i] != '\0'; i++)
	{
		if (c == seperators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes ever word in a string
 * @s: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		if (s[i] >= 'a' && s[i] <= 'z' && is_seperator(s[i - 1]))
		{
			s[i] -= 32;
		}
	}
	return (s);
}
