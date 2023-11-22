#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	char *token;
	int i = 0, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (token = strtok(str, " "); token != NULL; token = strtok(NULL, " "))
		count++;

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (token = strtok(str, " "); token != NULL; token = strtok(NULL, " "))
	{
		words[i] = malloc((strlen(token) + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			int j;
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		strcpy(words[i], token);
		i++;
	}
	words[i] = NULL;

	return (words);
}
