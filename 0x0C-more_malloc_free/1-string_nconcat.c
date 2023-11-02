#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int concat_len = 0;
	char *concatenated = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		concat_len = len1 + len2;
	else
		concat_len = len1 + n;

	concatenated = malloc((concat_len + 1) * sizeof(char));
			if (concatenated == NULL)
			return (NULL);

			strcpy(concatenated, s1);

			strncat(concatenated, s2, n);
			return (concatenated);
}
