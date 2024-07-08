#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the set of bytes searched for
 *
 * Return: pointer to the bytes in s that matches one of the
 * bytes in accept, or Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *match = NULL;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				match = s;
				return (match);
			}
		}
		a++;
	}
	return (match); /*return NULL if no match found*/
}
