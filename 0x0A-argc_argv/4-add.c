#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isdigit_custom - Checks if a character is a digit (0-9).
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */

int isdigit_custom(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/*check if no numbers are passed*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/*Loop through each argument*/
	for (i = 1; i < argc; i++)
	{
		/*Check if the argument contains only digits*/
		/*reach the end of the string for j*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*Convert argument to integer and add to sum*/
		sum += atoi(argv[i]);
	}
	/*Print the result*/
	printf("%d\n", sum);
	return (0);
}
