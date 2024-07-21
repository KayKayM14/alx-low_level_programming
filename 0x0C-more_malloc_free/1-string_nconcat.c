#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes from s2 to concatenate to s1
 * Return: pointer to the newly allocated space in memory,
 * which contains s1 followed by the first n bytes of s2,
 * and null terminated. Returns NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, len_concat, i, j;

	/*treat null as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* We use strlen to get the lengths of s1 and s2.*/
	len1 = strlen(s1);
	len2 = strlen(s2);

	/*If n is greater or equal to the length of s2, use the entire s2*/
	if (n >= len2)
		n = len2;
	len_concat = len1 + n;

	/*Allocate memory for the concatenated string*/
	concat = malloc(len_concat + 1); /*+1 for the null terminator*/

	if (concat == NULL)
		return (NULL);

	/*Copy s1 into the concatenated string*/
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/*Copy the first n bytes of s2 into the concatenated string*/
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/*Null terminate the concatenated string*/
	concat[i + j] = '\0';

	return (concat);
}
