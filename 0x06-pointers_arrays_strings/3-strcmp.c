#include "main.h"
#include <strings.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;
/*loop through each character*/
/*need to know where the string ends*/
	/*start your code by checking string length*/
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
