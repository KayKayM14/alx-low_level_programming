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
	char *a;

	for (; *s != '\0'; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
